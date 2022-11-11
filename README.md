# blis-fortran

This repository contains prototype Fortran bindings for the [BLIS](https://github.com/flame/blis) framework.

In the future these may be either published independently or contributed to the upstream project.

## Requirements

To create the bindings you will need:
* [Coccinelle](https://coccinelle.gitlabpages.inria.fr/website/)
* Python 3
* A Fortran processor with a C co-processor (e.g. `gfortran` and `gcc` from the GNU Compiler Collection)
* GNU `make`

## Building

_NOTE: This section assumes you've already installed BLIS into a known location. For more details refer to the BLIS [Build System](https://github.com/flame/blis/blob/master/docs/BuildSystem.md)._

To build a prototype interface run:

```
$ make
```


## Acknowledgements

The semantic patches have been kindly contributed by [Michele Martone](http://martone.userweb.mwn.de/). We also thank the Coccinelle authors for their powerful pattern matching program.