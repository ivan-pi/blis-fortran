@fm@
identifier cf =~ "bli_.*";
parameter list PL;
@@

char* cf(PL);

@script: python@
pl << fm.PL;
ff << fm.cf;
@@

string_wrapper_template = """
function {name}() result(str)
   use, intrinsic :: iso_c_binding, only: c_size_t, c_ptr
   character(len=:), allocatable :: str
   interface
      !> The procedure we're wrapping
      !> char* {name}();
      type(c_ptr) function c_{name}() bind(c,name="{name}")
         import c_ptr
      end function
      !> String length helper function
      integer(c_size_t) function c_strlen(s) bind(c,name="strlen")
        import c_size_t, c_ptr
        type(c_ptr), intent(in), value :: s
      end function
   end interface
   type(c_ptr) :: c_str_ptr
   integer(c_size_t) :: c_len

   c_str_ptr = c_{name}()
   c_len = c_strlen(c_str_ptr)
   allocate(character(len=c_len) :: str)
   block
      character(len=c_len,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str_ptr,str_ptr)
      str = str_ptr
   end block
end function {name}
"""

print(string_wrapper_template.format(
    name=ff))