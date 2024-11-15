module blis

use, intrinsic :: iso_c_binding
implicit none

private

public :: bli_init
public :: bli_finalize

public :: bli_clock
public :: bli_clock_min_diff

public :: bli_info_get_version_str

include "blis_support.inc"

interface
real(c_double) function bli_clock() bind(c)
import c_double
end function
real(c_double) function bli_clock_min_diff(time_prev_min,time_start) bind(c)
import c_double
real(c_double), intent(in), value :: time_prev_min
real(c_double), intent(in), value :: time_start
end function
end interface

contains

include "string_wrappers.inc"

end module blis