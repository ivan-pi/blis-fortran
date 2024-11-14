interface
  ! void bli_finalize()
  subroutine bli_finalize() bind(c,name='bli_finalize')
  end subroutine
end interface

interface
  ! void bli_init()
  subroutine bli_init() bind(c,name='bli_init')
  end subroutine
end interface

