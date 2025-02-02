SHELL=/bin/bash

bin_PROGRAMS=print_enums
print_enums_SOURCES=print_enums.c
AM_CXXFLAGS=-pedantic -Wall
NOGIT_CLEANFILES= \
	blis_0.h \
	blis_1.h \
	blis_2.h \
	blis_3.h \
	blis.h.pp

CLEANFILES= \
	include/blis_enums.inc \
	include/blis_generics.inc \
	include/gemm.inc \
	include/blis_support.inc \
	include/string_wrappers.inc \
	include/blis.inc
	$(NOGIT_CLEANFILES)
EXTRA_DIST=$(CLEANFILES)

.phony: all
all: $(bin_PROGRAMS) $(EXTRA_DIST)

include/blis_enums.inc: print_enums
	./print_enums > $@

include/blis_generics.inc: blis_ops.py
	python3 $< > $@

include/gemm.inc: blis.cocci
	spatch --sp-file $< blis_gemm.h --python `which python3` > $@

include/blis_support.inc: blis_support.cocci blis_support.h
	spatch --sp-file $< blis_support.h --python `which python3` > $@

include/string_wrappers.inc: string_wrappers.cocci blis.h.pp
	spatch --sp-file $< blis.h.pp --python `which python3` > $@

include/blis.inc: blis.cocci blis.h.pp remove_void
	spatch --sp-file $< blis.h.pp --python `which python3` > $@

remove_void: remove_single_void.cocci blis.h.pp
	spatch --sp-file $< blis.h.pp > remove_void.diff
	patch < remove_void.diff

.phony: check
check:
	spatch --testall

# temporary, transitory rule
.phony: grind
grind: $(NOGIT_CLEANFILES)

blis_0.h:
	if test -f "$(BLIS_HEADER)"; then cp $(BLIS_HEADER) $@; else cp $$( cpp <( echo '#include "blis.h"'; ) | grep '^#.*blis.h'| head -n 1 | awk '{ print $$3; }' | tr -d '"' ) -p $@; fi
# 	cp tests/noobj.c $@ # grind less ;-)

blis_1.h:  tests/noobj.cocci blis_0.h
	spatch --sp-file $+ -o $@

blis_2.h:  tests/noobjparm.cocci blis_1.h
	spatch --sp-file $+ -o $@

blis_3.h:  tests/noattr.cocci blis_2.h
	spatch --sp-file $+ -o $@

.phony: blis.h.pp
blis.h.pp:
	$(CC) -P -C -E $(BLIS_HEADER) -o $@


