module blis_enums
implicit none

!> The following would be nice to generate automatically
enum, bind(c)
enumerator :: BLIS_NO_TRANSPOSE = int(x'0')
enumerator :: BLIS_TRANSPOSE = shiftl(int(x'1'),3)
end enum

end module