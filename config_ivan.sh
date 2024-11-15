autoreconf -i && \
    ./configure --with-blis-header=/Users/di75yas/fortran/blis/include/haswell/blis.h \
    CFLAGS=-I/Users/di75yas/fortran/blis/include/haswell \
    LDFLAGS=-L/Users/di75yas/fortran/blis/lib/haswell \
    && make
