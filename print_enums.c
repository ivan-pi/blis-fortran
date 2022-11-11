
#include <stdio.h>
#include <stdlib.h>

#include "blis.h"

int main(void)
{
    printf("integer(c_int), parameter :: BLIS_NO_TRANSPOSE      = %d\n", BLIS_NO_TRANSPOSE);
    printf("integer(c_int), parameter :: BLIS_TRANSPOSE         = %d\n", BLIS_TRANSPOSE);
    printf("integer(c_int), parameter :: BLIS_CONJ_NO_TRANSPOSE = %d\n", BLIS_CONJ_NO_TRANSPOSE);
    printf("integer(c_int), parameter :: BLIS_CONJ_TRANSPOSE    = %d\n\n", BLIS_CONJ_TRANSPOSE);

    printf("integer(c_int), parameter :: BLIS_NO_CONJUGATE = %d\n", BLIS_NO_CONJUGATE);
    printf("integer(c_int), parameter :: BLIS_CONJUGATE    = %d\n\n", BLIS_CONJUGATE);

    printf("integer(c_int), parameter :: BLIS_LEFT  = %d\n", BLIS_LEFT);
    printf("integer(c_int), parameter :: BLIS_RIGHT = %d\n\n", BLIS_RIGHT);

    printf("integer(c_int), parameter :: BLIS_LOWER = %d\n", BLIS_LOWER);
    printf("integer(c_int), parameter :: BLIS_UPPER = %d\n", BLIS_UPPER);
    printf("integer(c_int), parameter :: BLIS_DENSE = %d\n\n", BLIS_DENSE);

    printf("integer(c_int), parameter :: BLIS_NONUNIT_DIAG = %d\n", BLIS_NONUNIT_DIAG);
    printf("integer(c_int), parameter :: BLIS_UNIT_DIAG    = %d\n\n", BLIS_UNIT_DIAG);

    return 0;
}
