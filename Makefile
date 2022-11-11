BLIS_PREFIX = /usr/local
BLIS_INC    = $(BLIS_PREFIX)/include/blis
BLIS_LIB    = $(BLIS_PREFIX)/lib/libblis.a

OTHER_LIBS  = -lm -lpthread -fopenmp

CC          = gcc
CFLAGS      = -O2 -g -I$(BLIS_INC)
LINKER      = $(CC)

FC          = gfortran
FCFLAGS     = -I./include

OBJS        = enum.o

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.phony: all
all: demo_gemm

demo_gemm: blis_enums.inc gemm.inc demo_gemm.F90
	$(FC) demo_gemm.F90 $(BLIS_LIB) $(OTHER_LIBS) -o $@

print_enums: enum.o
	$(LINKER) $< $(BLIS_LIB) $(OTHER_LIBS) -o $@

include/blis_enums.inc: print_enums
	./print_enums > $@

gemm.inc: blis4.cocci
	spatch --sp-file $< blis_extract.h > $@ --python `which python2`

.phony: clean
clean:
	rm -fv *.inc *.o *.mod
	rm -fv enum demo_gemm
