
bin_PROGRAMS=print_enums
print_enums_SOURCES=print_enums.c
AM_CXXFLAGS=-pedantic -Wall
CLEANFILES= \
	include/blis_enums.inc \
	include/gemm.inc \
	include/blis_support.inc \
	include/string_wrappers.inc
EXTRA_DIST=$(CLEANFILES)

all: $(bin_PROGRAMS) $(EXTRA_DIST)

include/blis_enums.inc: print_enums
	./print_enums > $@

include/gemm.inc: blis.cocci
	spatch --sp-file $< blis_gemm.h > $@ --python `which python3`

include/blis_support.inc: blis_support.cocci blis_support.h
	spatch --sp-file $< blis_support.h > $@ --python `which python3`

include/string_wrappers.inc: string_wrappers.cocci blis_support.h
	spatch --sp-file $< blis_support.h > $@ --python `which python3`

check:
	spatch --testall
