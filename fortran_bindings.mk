BLIS_PREFIX = /usr/local
BLIS_INC    = $(BLIS_PREFIX)/include/blis
BLIS_LIB    = $(BLIS_PREFIX)/lib/libblis.a

OTHER_LIBS  = -lm -lpthread -fopenmp

CC          = gcc
CFLAGS      = -O2 -g -I$(BLIS_INC)
LINKER      = $(CC)

FC          = gfortran
FCFLAGS     = -I./include

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.phony: all
all: include/blis_enums.inc include/gemm.inc

include/blis_enums.inc: print_enums
	./print_enums > $@

print_enums: print_enums.o
	$(LINKER) $< $(BLIS_LIB) $(OTHER_LIBS) -o $@

# TODO: replace blis_gemm.h with output from the preprocessor
include/gemm.inc: blis.cocci
	spatch --sp-file $< blis_gemm.h > $@ --python `which python3`

.phony: clean
clean:
	rm -f include/*.inc *.o print_enums