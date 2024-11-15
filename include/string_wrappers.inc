
function bli_info_get_int_type_size_str() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_int_type_size_str();
      function c_bli_info_get_int_type_size_str() bind(c,name="bli_info_get_int_type_size_str")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_int_type_size_str
      end function
      !> String length helper function
      function c_strlen(s) bind(c,name="strlen")
        import c_size_t, c_ptr
        type(c_ptr), intent(in), value :: s
        integer(c_size_t) :: c_strlen
      end function
   end interface
   type(c_ptr) :: c_str_ptr
   integer(c_size_t) :: c_len

   c_str_ptr = c_bli_info_get_int_type_size_str()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_int_type_size_str


function bli_info_get_version_str() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_version_str();
      function c_bli_info_get_version_str() bind(c,name="bli_info_get_version_str")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_version_str
      end function
      !> String length helper function
      function c_strlen(s) bind(c,name="strlen")
        import c_size_t, c_ptr
        type(c_ptr), intent(in), value :: s
        integer(c_size_t) :: c_strlen
      end function
   end interface
   type(c_ptr) :: c_str_ptr
   integer(c_size_t) :: c_len

   c_str_ptr = c_bli_info_get_version_str()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_version_str

