

bin_PROGRAMS=print_enums
print_enums_SOURCES=print_enums.c
AM_CXXFLAGS=-pedantic -Wall
EXTRA_DIST=include/blis_enums.inc
CLEANFILES=include/blis_enums.inc

all: $(bin_PROGRAMS) $(EXTRA_DIST)

include/blis_enums.inc: print_enums
	./print_enums > $@


