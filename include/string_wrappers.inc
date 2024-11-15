
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


function bli_dt_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_dt_string();
      function c_bli_dt_string() bind(c,name="bli_dt_string")
         import c_ptr
         type(c_ptr) :: c_bli_dt_string
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

   c_str_ptr = c_bli_dt_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_dt_string


function bli_info_get_gemm_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_gemm_impl_string();
      function c_bli_info_get_gemm_impl_string() bind(c,name="bli_info_get_gemm_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_gemm_impl_string
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

   c_str_ptr = c_bli_info_get_gemm_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_gemm_impl_string


function bli_info_get_gemmt_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_gemmt_impl_string();
      function c_bli_info_get_gemmt_impl_string() bind(c,name="bli_info_get_gemmt_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_gemmt_impl_string
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

   c_str_ptr = c_bli_info_get_gemmt_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_gemmt_impl_string


function bli_info_get_hemm_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_hemm_impl_string();
      function c_bli_info_get_hemm_impl_string() bind(c,name="bli_info_get_hemm_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_hemm_impl_string
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

   c_str_ptr = c_bli_info_get_hemm_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_hemm_impl_string


function bli_info_get_herk_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_herk_impl_string();
      function c_bli_info_get_herk_impl_string() bind(c,name="bli_info_get_herk_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_herk_impl_string
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

   c_str_ptr = c_bli_info_get_herk_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_herk_impl_string


function bli_info_get_her2k_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_her2k_impl_string();
      function c_bli_info_get_her2k_impl_string() bind(c,name="bli_info_get_her2k_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_her2k_impl_string
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

   c_str_ptr = c_bli_info_get_her2k_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_her2k_impl_string


function bli_info_get_symm_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_symm_impl_string();
      function c_bli_info_get_symm_impl_string() bind(c,name="bli_info_get_symm_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_symm_impl_string
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

   c_str_ptr = c_bli_info_get_symm_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_symm_impl_string


function bli_info_get_syrk_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_syrk_impl_string();
      function c_bli_info_get_syrk_impl_string() bind(c,name="bli_info_get_syrk_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_syrk_impl_string
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

   c_str_ptr = c_bli_info_get_syrk_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_syrk_impl_string


function bli_info_get_syr2k_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_syr2k_impl_string();
      function c_bli_info_get_syr2k_impl_string() bind(c,name="bli_info_get_syr2k_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_syr2k_impl_string
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

   c_str_ptr = c_bli_info_get_syr2k_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_syr2k_impl_string


function bli_info_get_trmm_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_trmm_impl_string();
      function c_bli_info_get_trmm_impl_string() bind(c,name="bli_info_get_trmm_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_trmm_impl_string
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

   c_str_ptr = c_bli_info_get_trmm_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_trmm_impl_string


function bli_info_get_trmm3_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_trmm3_impl_string();
      function c_bli_info_get_trmm3_impl_string() bind(c,name="bli_info_get_trmm3_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_trmm3_impl_string
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

   c_str_ptr = c_bli_info_get_trmm3_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_trmm3_impl_string


function bli_info_get_trsm_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_trsm_impl_string();
      function c_bli_info_get_trsm_impl_string() bind(c,name="bli_info_get_trsm_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_trsm_impl_string
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

   c_str_ptr = c_bli_info_get_trsm_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_trsm_impl_string


function bli_arch_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_arch_string();
      function c_bli_arch_string() bind(c,name="bli_arch_string")
         import c_ptr
         type(c_ptr) :: c_bli_arch_string
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

   c_str_ptr = c_bli_arch_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_arch_string


function bli_info_get_gemm_ukr_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_gemm_ukr_impl_string();
      function c_bli_info_get_gemm_ukr_impl_string() bind(c,name="bli_info_get_gemm_ukr_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_gemm_ukr_impl_string
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

   c_str_ptr = c_bli_info_get_gemm_ukr_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_gemm_ukr_impl_string


function bli_info_get_gemmtrsm_l_ukr_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_gemmtrsm_l_ukr_impl_string();
      function c_bli_info_get_gemmtrsm_l_ukr_impl_string() bind(c,name="bli_info_get_gemmtrsm_l_ukr_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_gemmtrsm_l_ukr_impl_string
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

   c_str_ptr = c_bli_info_get_gemmtrsm_l_ukr_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_gemmtrsm_l_ukr_impl_string


function bli_info_get_gemmtrsm_u_ukr_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_gemmtrsm_u_ukr_impl_string();
      function c_bli_info_get_gemmtrsm_u_ukr_impl_string() bind(c,name="bli_info_get_gemmtrsm_u_ukr_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_gemmtrsm_u_ukr_impl_string
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

   c_str_ptr = c_bli_info_get_gemmtrsm_u_ukr_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_gemmtrsm_u_ukr_impl_string


function bli_info_get_trsm_l_ukr_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_trsm_l_ukr_impl_string();
      function c_bli_info_get_trsm_l_ukr_impl_string() bind(c,name="bli_info_get_trsm_l_ukr_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_trsm_l_ukr_impl_string
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

   c_str_ptr = c_bli_info_get_trsm_l_ukr_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_trsm_l_ukr_impl_string


function bli_info_get_trsm_u_ukr_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_info_get_trsm_u_ukr_impl_string();
      function c_bli_info_get_trsm_u_ukr_impl_string() bind(c,name="bli_info_get_trsm_u_ukr_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_info_get_trsm_u_ukr_impl_string
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

   c_str_ptr = c_bli_info_get_trsm_u_ukr_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_info_get_trsm_u_ukr_impl_string


function bli_ind_oper_get_avail_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_ind_oper_get_avail_impl_string();
      function c_bli_ind_oper_get_avail_impl_string() bind(c,name="bli_ind_oper_get_avail_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_ind_oper_get_avail_impl_string
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

   c_str_ptr = c_bli_ind_oper_get_avail_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_ind_oper_get_avail_impl_string


function bli_gks_l3_ukr_impl_string() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* bli_gks_l3_ukr_impl_string();
      function c_bli_gks_l3_ukr_impl_string() bind(c,name="bli_gks_l3_ukr_impl_string")
         import c_ptr
         type(c_ptr) :: c_bli_gks_l3_ukr_impl_string
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

   c_str_ptr = c_bli_gks_l3_ukr_impl_string()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function bli_gks_l3_ukr_impl_string

