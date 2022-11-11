
! This parameter should be detected based on the BLAS API
#define BLIS_INT_TYPE_SIZE 32


module blis_kinds

use, intrinsic :: iso_c_binding, only: &
    c_int32_t, &
    c_int64_t, &
    c_int, & 
    c_long, & 
    c_float, &
    c_double

public

private :: c_int32_t, c_int64_t, c_int, c_long

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

module colors
implicit none
private
public :: green, red
character(len=1), parameter :: esc = achar(27)
character(len=2), parameter :: start = esc // '['
character(len=1), parameter :: end = 'm'
character(len=*), parameter :: clear = start // '0' // end
contains
pure function colorize(str,code) result(cstr)
character(*), intent(in) :: str
character(*), intent(in) :: code
character(:), allocatable :: cstr
cstr = start // code // end // str // clear
end function
pure function green(str) result(cstr)
character(*), intent(in) :: str
character(:), allocatable :: cstr
cstr = colorize(str,'32')
end function
pure function red(str) result(cstr)
character(*), intent(in) :: str
character(:), allocatable :: cstr
cstr = colorize(str,'31')
end function
end module

program demo_gemm
use blis
use blis_kinds
use colors
implicit none


include "gemm.inc"


real :: a(3,3), b(3,2), c(3,2)

logical :: are_equal
character(len=:), allocatable :: msg

print *, "BLIS Version " // bli_info_get_version_str()

a = reshape([1,1,1,2,2,2,3,3,3],[3,3])
b = reshape([3,2,1,2,3,4],[3,2])

call bli_sgemm( &
    transa=BLIS_NO_TRANSPOSE, &
    transb=BLIS_NO_TRANSPOSE, &
    m=3,n=2,k=3, &
    alpha=1.0, &
    a=a(1,1), rs_a=1, cs_a=3, &
    b=b(1,1), rs_b=1, cs_b=3, &
    beta=0.0, &
    c=c(1,1), rs_c=1, cs_c=3)

print *, "BLIS Result: "
print *, c

print *, "Fortran Result: "
print *, matmul(a,b)

are_equal = all(abs(c - matmul(a,b)) < 1.0e-6)


msg = "Results " // &
    trim(merge("are    ","are not",are_equal)) // &
    " equal."

if (are_equal) then
    print *, green(msg)
else
    print *, red(msg)
end if

end program