AC_PREREQ([2.71])
AC_INIT([blis_fortran],[0.0],[ivan pribec and michele martone])
AC_COPYRIGHT([Copyright (c) 2024-2024, ivan pribec and michele martone])
AM_INIT_AUTOMAKE
AC_OPENMP
CFLAGS="${CFLAGS} ${OPENMP_CFLAGS}";
AC_CHECK_PROGS([GREP],[ggrep grep],[false],[])
AC_CONFIG_HEADERS([config.h])
AH_TEMPLATE([HAVE_URLS_FILE])
AC_CHECK_LIB([pthread],[main]) dnl note: main is always there
AC_CHECK_LIB([blis],[main]) dnl note: main is always there
AC_CHECK_LIB([gfortran],[main]) dnl note: main is always there
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
AC_MSG_NOTICE([Created a Makefile.])
