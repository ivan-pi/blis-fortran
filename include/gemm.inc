! void bli_sinvscald(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const float * alpha, float * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_sinvscald(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), intent(in) :: alpha
  real(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_sscald(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const float * alpha, float * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_sscald(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), intent(in) :: alpha
  real(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_ssetd(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const float * alpha, float * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_ssetd(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), intent(in) :: alpha
  real(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_dinvscald(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const double * alpha, double * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_dinvscald(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), intent(in) :: alpha
  real(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_dscald(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const double * alpha, double * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_dscald(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), intent(in) :: alpha
  real(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_dsetd(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const double * alpha, double * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_dsetd(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), intent(in) :: alpha
  real(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_zinvscald(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const dcomplex * alpha, dcomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_zinvscald(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_double), intent(in) :: alpha
  complex(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_zscald(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const dcomplex * alpha, dcomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_zscald(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_double), intent(in) :: alpha
  complex(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_zsetd(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const dcomplex * alpha, dcomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_zsetd(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_double), intent(in) :: alpha
  complex(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_cinvscald(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const scomplex * alpha, scomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_cinvscald(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_float), intent(in) :: alpha
  complex(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_cscald(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const scomplex * alpha, scomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_cscald(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_float), intent(in) :: alpha
  complex(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_csetd(conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const scomplex * alpha, scomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_csetd(conjalpha, diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(conj_t), value, intent(in) :: conjalpha
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_float), intent(in) :: alpha
  complex(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_saxpyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float * alpha, const float * x, inc_t rs_x, inc_t cs_x, float * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_saxpyd(diagoffx, diagx, transx, m, n, alpha, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), intent(in) :: alpha
  real(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_sscal2d(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float * alpha, const float * x, inc_t rs_x, inc_t cs_x, float * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_sscal2d(diagoffx, diagx, transx, m, n, alpha, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), intent(in) :: alpha
  real(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_daxpyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double * alpha, const double * x, inc_t rs_x, inc_t cs_x, double * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_daxpyd(diagoffx, diagx, transx, m, n, alpha, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), intent(in) :: alpha
  real(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_dscal2d(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double * alpha, const double * x, inc_t rs_x, inc_t cs_x, double * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_dscal2d(diagoffx, diagx, transx, m, n, alpha, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), intent(in) :: alpha
  real(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_zaxpyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex * alpha, const dcomplex * x, inc_t rs_x, inc_t cs_x, dcomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_zaxpyd(diagoffx, diagx, transx, m, n, alpha, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_double), intent(in) :: alpha
  complex(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_zscal2d(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex * alpha, const dcomplex * x, inc_t rs_x, inc_t cs_x, dcomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_zscal2d(diagoffx, diagx, transx, m, n, alpha, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_double), intent(in) :: alpha
  complex(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_caxpyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex * alpha, const scomplex * x, inc_t rs_x, inc_t cs_x, scomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_caxpyd(diagoffx, diagx, transx, m, n, alpha, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_float), intent(in) :: alpha
  complex(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_cscal2d(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex * alpha, const scomplex * x, inc_t rs_x, inc_t cs_x, scomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_cscal2d(diagoffx, diagx, transx, m, n, alpha, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_float), intent(in) :: alpha
  complex(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_sxpbyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float * x, inc_t rs_x, inc_t cs_x, const float * beta, float * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_sxpbyd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, beta, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_float), intent(in) :: beta
  real(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_saddd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float * x, inc_t rs_x, inc_t cs_x, float * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_saddd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_scopyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float * x, inc_t rs_x, inc_t cs_x, float * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_scopyd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_ssubd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float * x, inc_t rs_x, inc_t cs_x, float * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_ssubd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_dxpbyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double * x, inc_t rs_x, inc_t cs_x, const double * beta, double * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_dxpbyd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, beta, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_double), intent(in) :: beta
  real(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_daddd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double * x, inc_t rs_x, inc_t cs_x, double * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_daddd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_dcopyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double * x, inc_t rs_x, inc_t cs_x, double * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_dcopyd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_dsubd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double * x, inc_t rs_x, inc_t cs_x, double * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_dsubd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  real(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_zxpbyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex * x, inc_t rs_x, inc_t cs_x, const dcomplex * beta, dcomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_zxpbyd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, beta, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_double), intent(in) :: beta
  complex(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_zaddd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex * x, inc_t rs_x, inc_t cs_x, dcomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_zaddd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_zcopyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex * x, inc_t rs_x, inc_t cs_x, dcomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_zcopyd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_zsubd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex * x, inc_t rs_x, inc_t cs_x, dcomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_zsubd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_double), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_double), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_cxpbyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex * x, inc_t rs_x, inc_t cs_x, const scomplex * beta, scomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_cxpbyd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, beta, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_float), intent(in) :: beta
  complex(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_caddd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex * x, inc_t rs_x, inc_t cs_x, scomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_caddd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_ccopyd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex * x, inc_t rs_x, inc_t cs_x, scomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_ccopyd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_csubd(doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex * x, inc_t rs_x, inc_t cs_x, scomplex * y, inc_t rs_y, inc_t cs_y)
interface
subroutine bli_csubd(diagoffx, diagx, transx, m, n, x, rs_x, cs_x, y, rs_y, cs_y) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(diag_t), value, intent(in) :: diagx
  integer(trans_t), value, intent(in) :: transx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_float), dimension(*), intent(in) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
  complex(c_float), dimension(*), intent(inout) :: y
  integer(inc_t), value, intent(in) :: rs_y
  integer(inc_t), value, intent(in) :: cs_y
end subroutine
end interface

! void bli_ssetid(doff_t diagoffx, dim_t m, dim_t n, const float * alpha, float * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_ssetid(diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), intent(in) :: alpha
  real(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_sshiftd(doff_t diagoffx, dim_t m, dim_t n, const float * alpha, float * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_sshiftd(diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), intent(in) :: alpha
  real(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_csetid(doff_t diagoffx, dim_t m, dim_t n, const float * alpha, scomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_csetid(diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), intent(in) :: alpha
  complex(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_dsetid(doff_t diagoffx, dim_t m, dim_t n, const double * alpha, double * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_dsetid(diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), intent(in) :: alpha
  real(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_dshiftd(doff_t diagoffx, dim_t m, dim_t n, const double * alpha, double * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_dshiftd(diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), intent(in) :: alpha
  real(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_zsetid(doff_t diagoffx, dim_t m, dim_t n, const double * alpha, dcomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_zsetid(diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), intent(in) :: alpha
  complex(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_zshiftd(doff_t diagoffx, dim_t m, dim_t n, const dcomplex * alpha, dcomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_zshiftd(diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_double), intent(in) :: alpha
  complex(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_cshiftd(doff_t diagoffx, dim_t m, dim_t n, const scomplex * alpha, scomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_cshiftd(diagoffx, m, n, alpha, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_float), intent(in) :: alpha
  complex(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_sinvertd(doff_t diagoffx, dim_t m, dim_t n, float * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_sinvertd(diagoffx, m, n, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_dinvertd(doff_t diagoffx, dim_t m, dim_t n, double * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_dinvertd(diagoffx, m, n, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  real(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_zinvertd(doff_t diagoffx, dim_t m, dim_t n, dcomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_zinvertd(diagoffx, m, n, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_double), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_cinvertd(doff_t diagoffx, dim_t m, dim_t n, scomplex * x, inc_t rs_x, inc_t cs_x)
interface
subroutine bli_cinvertd(diagoffx, m, n, x, rs_x, cs_x) bind(c)
    use blis_kinds
  integer(doff_t), value, intent(in) :: diagoffx
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  complex(c_float), dimension(*), intent(inout) :: x
  integer(inc_t), value, intent(in) :: rs_x
  integer(inc_t), value, intent(in) :: cs_x
end subroutine
end interface

! void bli_sgemm(trans_t transa, trans_t transb, dim_t m, dim_t n, dim_t k, const float * alpha, const float * a, inc_t rs_a, inc_t cs_a, const float * b, inc_t rs_b, inc_t cs_b, const float * beta, float * c, inc_t rs_c, inc_t cs_c)
interface
subroutine bli_sgemm(transa, transb, m, n, k, alpha, a, rs_a, cs_a, b, rs_b, cs_b, beta, c, rs_c, cs_c) bind(c)
    use blis_kinds
  integer(trans_t), value, intent(in) :: transa
  integer(trans_t), value, intent(in) :: transb
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  integer(dim_t), value, intent(in) :: k
  real(c_float), intent(in) :: alpha
  real(c_float), dimension(*), intent(in) :: a
  integer(inc_t), value, intent(in) :: rs_a
  integer(inc_t), value, intent(in) :: cs_a
  real(c_float), dimension(*), intent(in) :: b
  integer(inc_t), value, intent(in) :: rs_b
  integer(inc_t), value, intent(in) :: cs_b
  real(c_float), intent(in) :: beta
  real(c_float), dimension(*), intent(inout) :: c
  integer(inc_t), value, intent(in) :: rs_c
  integer(inc_t), value, intent(in) :: cs_c
end subroutine
end interface

! void bli_dgemm(trans_t transa, trans_t transb, dim_t m, dim_t n, dim_t k, const double * alpha, const double * a, inc_t rs_a, inc_t cs_a, const double * b, inc_t rs_b, inc_t cs_b, const double * beta, double * c, inc_t rs_c, inc_t cs_c)
interface
subroutine bli_dgemm(transa, transb, m, n, k, alpha, a, rs_a, cs_a, b, rs_b, cs_b, beta, c, rs_c, cs_c) bind(c)
    use blis_kinds
  integer(trans_t), value, intent(in) :: transa
  integer(trans_t), value, intent(in) :: transb
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  integer(dim_t), value, intent(in) :: k
  real(c_double), intent(in) :: alpha
  real(c_double), dimension(*), intent(in) :: a
  integer(inc_t), value, intent(in) :: rs_a
  integer(inc_t), value, intent(in) :: cs_a
  real(c_double), dimension(*), intent(in) :: b
  integer(inc_t), value, intent(in) :: rs_b
  integer(inc_t), value, intent(in) :: cs_b
  real(c_double), intent(in) :: beta
  real(c_double), dimension(*), intent(inout) :: c
  integer(inc_t), value, intent(in) :: rs_c
  integer(inc_t), value, intent(in) :: cs_c
end subroutine
end interface

! void bli_zgemm(trans_t transa, trans_t transb, dim_t m, dim_t n, dim_t k, const dcomplex * alpha, const dcomplex * a, inc_t rs_a, inc_t cs_a, const dcomplex * b, inc_t rs_b, inc_t cs_b, const dcomplex * beta, dcomplex * c, inc_t rs_c, inc_t cs_c)
interface
subroutine bli_zgemm(transa, transb, m, n, k, alpha, a, rs_a, cs_a, b, rs_b, cs_b, beta, c, rs_c, cs_c) bind(c)
    use blis_kinds
  integer(trans_t), value, intent(in) :: transa
  integer(trans_t), value, intent(in) :: transb
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  integer(dim_t), value, intent(in) :: k
  complex(c_double), intent(in) :: alpha
  complex(c_double), dimension(*), intent(in) :: a
  integer(inc_t), value, intent(in) :: rs_a
  integer(inc_t), value, intent(in) :: cs_a
  complex(c_double), dimension(*), intent(in) :: b
  integer(inc_t), value, intent(in) :: rs_b
  integer(inc_t), value, intent(in) :: cs_b
  complex(c_double), intent(in) :: beta
  complex(c_double), dimension(*), intent(inout) :: c
  integer(inc_t), value, intent(in) :: rs_c
  integer(inc_t), value, intent(in) :: cs_c
end subroutine
end interface

! void bli_cgemm(trans_t transa, trans_t transb, dim_t m, dim_t n, dim_t k, const scomplex * alpha, const scomplex * a, inc_t rs_a, inc_t cs_a, const scomplex * b, inc_t rs_b, inc_t cs_b, const scomplex * beta, scomplex * c, inc_t rs_c, inc_t cs_c)
interface
subroutine bli_cgemm(transa, transb, m, n, k, alpha, a, rs_a, cs_a, b, rs_b, cs_b, beta, c, rs_c, cs_c) bind(c)
    use blis_kinds
  integer(trans_t), value, intent(in) :: transa
  integer(trans_t), value, intent(in) :: transb
  integer(dim_t), value, intent(in) :: m
  integer(dim_t), value, intent(in) :: n
  integer(dim_t), value, intent(in) :: k
  complex(c_float), intent(in) :: alpha
  complex(c_float), dimension(*), intent(in) :: a
  integer(inc_t), value, intent(in) :: rs_a
  integer(inc_t), value, intent(in) :: cs_a
  complex(c_float), dimension(*), intent(in) :: b
  integer(inc_t), value, intent(in) :: rs_b
  integer(inc_t), value, intent(in) :: cs_b
  complex(c_float), intent(in) :: beta
  complex(c_float), dimension(*), intent(inout) :: c
  integer(inc_t), value, intent(in) :: rs_c
  integer(inc_t), value, intent(in) :: cs_c
end subroutine
end interface

