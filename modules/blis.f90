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

function bli_info_get_version_str() result(version_str)
   character(len=:), allocatable :: version_str

   interface
      type(c_ptr) function c_bli_info_get_version_str() &
            bind(c,name="bli_info_get_version_str")
         import c_ptr
      end function
      integer(c_size_t) function c_strlen(s) bind(c,name="strlen")
        import c_size_t, c_ptr
        type(c_ptr), intent(in), value :: s
      end function
   end interface

   type(c_ptr) :: c_version_str
   integer(c_size_t) :: c_len

   c_version_str = c_bli_info_get_version_str()
   c_len = c_strlen(c_version_str)

   allocate(character(len=c_len) :: version_str)

   block
      character(len=c_len,kind=c_char), pointer :: str
      call c_f_pointer(c_version_str,str)
      version_str = str
   end block
end function

end module blis