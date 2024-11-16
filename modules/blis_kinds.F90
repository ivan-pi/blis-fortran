! This parameter should be detected based on the BLAS API
#define BLIS_INT_TYPE_SIZE 32

module blis_kinds

use, intrinsic :: iso_c_binding, only: &
    c_int32_t, c_int64_t, c_int, & 
    c_long, c_float, c_double, c_bool, c_int

public

private :: c_int32_t, c_int64_t, c_long

! Define integer kinds depending on what size integer was requested
#if BLIS_INT_TYPE_SIZE == 32
integer, parameter :: gint_t = c_int32_t
#elif BLIS_INT_TYPE_SIZE == 64
integer, parameter :: gint_t = c_int64_t
#else
integer, parameter :: gint_t = c_long
#endif
private :: gint_t

integer, parameter :: dim_t = gint_t
integer, parameter :: inc_t = gint_t
integer, parameter :: doff_t = gint_t


integer, parameter :: trans_t = c_int
integer, parameter :: conj_t = c_int
integer, parameter :: side_t = c_int
integer, parameter :: uplo_t = c_int
integer, parameter :: diag_t = c_int

include "blis_enums.inc"

end module