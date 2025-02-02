# blis-fortran

This repository contains prototype Fortran bindings for the [BLIS](https://github.com/flame/blis) framework.

In the future these may be either published independently or contributed to the upstream project.

BLIS - the BLAS-like Library Instantiation Software Framework, can be used to perform high-performance dense linear algebra operations via a BLAS-like API. Since BLIS is written in ISO C99, the BLIS procedures can be called safely from Fortran via the C interoperability features available since Fortran 2003. We plan to export interfaces for the full [BLIS Typed API](https://github.com/flame/blis/blob/master/docs/BLISTypedAPI.md).

Note that the BLIS library already includes a BLAS compatibility layer. If you'd like to use the native BLAS interface, this project is not needed. However, BLIS is not BLAS, and BLIS exposes some extra functionality which is not available in BLAS.

## Requirements

To create the bindings you will need:
* [Coccinelle](https://coccinelle.gitlabpages.inria.fr/website/)
* Python 3
* A Fortran processor with a C co-processor (e.g. `gfortran` and `gcc` from the GNU Compiler Collection)
* Autotools

## Building

_NOTE: This section assumes you've already installed BLIS into a known location. For more details refer to the BLIS [Build System](https://github.com/flame/blis/blob/master/docs/BuildSystem.md)._

Configure the project:
```
 ./configure --with-blis-header=/path/to/blis/include/../blis.h \
    CFLAGS=-I/path/to/blis/../include \
    LDFLAGS=-L/path/to/blis/../lib \
    && make
```
This will place the BLIS Fortran interfaces in the folder `include/`. Currently only a small subset of the BLIS Typed API is covered.

The Fortran BLIS bindings are placed into the folder `include/`.

## Examples & tests

After the bindings are generated, you can explore the examples or run the tests (TODO).

For example to run a GEMM:
```
$ cd examples/
$ make && ./demo_gemm
```

## Acknowledgements

The semantic patches have been kindly contributed by [Michele Martone](http://martone.userweb.mwn.de/). We also thank the Coccinelle authors for their powerful pattern matching program.