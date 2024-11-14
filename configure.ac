AC_PREREQ([2.71])
AC_INIT([blis_fortran],[0.0],[ivan pribec and michele martone])
AC_COPYRIGHT([Copyright (c) 2024-2024, ivan pribec and michele martone])
AM_INIT_AUTOMAKE
dnl AC_PROG_CXX
AC_CHECK_PROGS([GREP],[ggrep grep],[false],[])
AC_CONFIG_HEADERS([config.h])
AC_CHECK_HEADERS([libgen.h])
AC_CHECK_HEADERS([cgicc.h])
AH_TEMPLATE([HAVE_URLS_FILE])
AC_CHECK_LIB([blis],[main])
AC_CHECK_LIB([gfortran],[main])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
AC_MSG_NOTICE([Created a Makefile.])
