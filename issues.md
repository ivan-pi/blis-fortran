
## Mapping functions returning char *

Several BLIS functions have prototypes similar to,
```c
const char* bli_info_X_str(void);
```
which return a null-terminated string. The Fortran interface for such functions is
```fortran
function bli_info_X_str() bind(c)
   use, intrinsic :: iso_c_binding, only: c_ptr
   type(c_ptr) :: bli_info_X_str
end function
```
which doesn't provide immediate access to the value of the string. (Fortran strings carry an explicit length.) 

For a user-friendly binding, we want to wrap such functions to either
1. return a deferred-length character pointer
2. return a deferred-length character

Both options require explicit interfaces.

```fortran
! Option 1
pure function bli_info_X_str() result(str)
    use, intrinsic :: iso_c_binding, only: c_char
    character(kind=c_char,len=:), pointer :: str
end function

! Option 2
pure function bli_info_X_str() result(str)
    use, intrinsic :: iso_c_binding, only: c_char
    character(kind=c_char,len=:), allocatable :: str
end function
```

Option 1 isn't completely safe, because a Fortran user may accidentally try to deallocate the pointer or use it in a variable definition context thereby (accidentally) violating the `const` property.

Option 2 is safe, and is usually the preferred method. Both options require explicit interfaces. The full implementation for Option 2 is given as:
```
pure function bli_info_X_str() result(str)
   character(len=:), allocatable :: str
   interface
      type(c_ptr) function c_bli_info_X_str() &
            bind(c,name="bli_info_X_str")
         import c_ptr
      end function
      integer(c_size_t) function c_strlen(s) bind(c,name="strlen")
        import c_size_t, c_ptr
        type(c_ptr), intent(in), value :: s
      end function
   end interface
   type(c_ptr) :: c_str
   integer(c_size_t) :: strlen

   c_str = c_bli_info_X_str()
   strlen = c_strlen(c_str)
   allocate(character(len=strlen) :: str)
   block
      character(len=strlen,kind=c_char), pointer :: str_ptr
      call c_f_pointer(c_str,str_ptr)
      str = str_ptr
   end block
end function
```
Note how it requires
- renaming the original C function,
- querying the string length using `strlen`,
- copying the string contents into a new Fortran deferred-length string