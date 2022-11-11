BLIS_PREFIX = /usr/local
BLIS_LIB    = $(BLIS_PREFIX)/lib/libblis.a

OTHER_LIBS  = -lm -lpthread -fopenmp

FC          = gfortran
FCFLAGS     = -O2 -g -I../include/

.phony: all
all: demo_gemm

demo_gemm: demo_gemm.F90
	$(FC) ../modules/blis.f90 demo_gemm.F90  -o $@ $(FCFLAGS) $(BLIS_LIB) $(OTHER_LIBS)

.phony: clean
clean:
	rm -fv *.o *.mod
	rm -fv demo_gemm
