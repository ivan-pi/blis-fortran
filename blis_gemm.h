
 void bli_sgemm ( trans_t transa, trans_t transb, dim_t m, dim_t n, dim_t k, const float* alpha, const float* a, inc_t rs_a, inc_t cs_a, const float* b, inc_t rs_b, inc_t cs_b, const float* beta, float* c, inc_t rs_c, inc_t cs_c );
 void bli_dgemm ( trans_t transa, trans_t transb, dim_t m, dim_t n, dim_t k, const double* alpha, const double* a, inc_t rs_a, inc_t cs_a, const double* b, inc_t rs_b, inc_t cs_b, const double* beta, double* c, inc_t rs_c, inc_t cs_c );
 void bli_cgemm ( trans_t transa, trans_t transb, dim_t m, dim_t n, dim_t k, const scomplex* alpha, const scomplex* a, inc_t rs_a, inc_t cs_a, const scomplex* b, inc_t rs_b, inc_t cs_b, const scomplex* beta, scomplex* c, inc_t rs_c, inc_t cs_c );
 void bli_zgemm ( trans_t transa, trans_t transb, dim_t m, dim_t n, dim_t k, const dcomplex* alpha, const dcomplex* a, inc_t rs_a, inc_t cs_a, const dcomplex* b, inc_t rs_b, inc_t cs_b, const dcomplex* beta, dcomplex* c, inc_t rs_c, inc_t cs_c );


//
// Prototype BLAS-like interfaces with typed operands.
//
 void bli_saddd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float* x, inc_t rs_x, inc_t cs_x, float* y, inc_t rs_y, inc_t cs_y );
 void bli_daddd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double* x, inc_t rs_x, inc_t cs_x, double* y, inc_t rs_y, inc_t cs_y );
  void bli_caddd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex* x, inc_t rs_x, inc_t cs_x, scomplex* y, inc_t rs_y, inc_t cs_y );
  void bli_zaddd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex* x, inc_t rs_x, inc_t cs_x, dcomplex* y, inc_t rs_y, inc_t cs_y );

 void bli_scopyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float* x, inc_t rs_x, inc_t cs_x, float* y, inc_t rs_y, inc_t cs_y );
  void bli_dcopyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double* x, inc_t rs_x, inc_t cs_x, double* y, inc_t rs_y, inc_t cs_y );
  void bli_ccopyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex* x, inc_t rs_x, inc_t cs_x, scomplex* y, inc_t rs_y, inc_t cs_y );
  void bli_zcopyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex* x, inc_t rs_x, inc_t cs_x, dcomplex* y, inc_t rs_y, inc_t cs_y );

 void bli_ssubd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float* x, inc_t rs_x, inc_t cs_x, float* y, inc_t rs_y, inc_t cs_y );
  void bli_dsubd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double* x, inc_t rs_x, inc_t cs_x, double* y, inc_t rs_y, inc_t cs_y );
  void bli_csubd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex* x, inc_t rs_x, inc_t cs_x, scomplex* y, inc_t rs_y, inc_t cs_y );
  void bli_zsubd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex* x, inc_t rs_x, inc_t cs_x, dcomplex* y, inc_t rs_y, inc_t cs_y );

 void bli_saxpyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float* alpha, const float* x, inc_t rs_x, inc_t cs_x, float* y, inc_t rs_y, inc_t cs_y );
  void bli_daxpyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double* alpha, const double* x, inc_t rs_x, inc_t cs_x, double* y, inc_t rs_y, inc_t cs_y );
  void bli_caxpyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex* alpha, const scomplex* x, inc_t rs_x, inc_t cs_x, scomplex* y, inc_t rs_y, inc_t cs_y );
  void bli_zaxpyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex* alpha, const dcomplex* x, inc_t rs_x, inc_t cs_x, dcomplex* y, inc_t rs_y, inc_t cs_y );

 void bli_sscal2d ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float* alpha, const float* x, inc_t rs_x, inc_t cs_x, float* y, inc_t rs_y, inc_t cs_y );
  void bli_dscal2d ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double* alpha, const double* x, inc_t rs_x, inc_t cs_x, double* y, inc_t rs_y, inc_t cs_y );
  void bli_cscal2d ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex* alpha, const scomplex* x, inc_t rs_x, inc_t cs_x, scomplex* y, inc_t rs_y, inc_t cs_y );
  void bli_zscal2d ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex* alpha, const dcomplex* x, inc_t rs_x, inc_t cs_x, dcomplex* y, inc_t rs_y, inc_t cs_y );

 void bli_sinvertd ( doff_t diagoffx, dim_t m, dim_t n, float* x, inc_t rs_x, inc_t cs_x );
  void bli_dinvertd ( doff_t diagoffx, dim_t m, dim_t n, double* x, inc_t rs_x, inc_t cs_x );
  void bli_cinvertd ( doff_t diagoffx, dim_t m, dim_t n, scomplex* x, inc_t rs_x, inc_t cs_x );
  void bli_zinvertd ( doff_t diagoffx, dim_t m, dim_t n, dcomplex* x, inc_t rs_x, inc_t cs_x );

 void bli_sinvscald ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const float* alpha, float* x, inc_t rs_x, inc_t cs_x );
  void bli_dinvscald ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const double* alpha, double* x, inc_t rs_x, inc_t cs_x );
  void bli_cinvscald ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const scomplex* alpha, scomplex* x, inc_t rs_x, inc_t cs_x );
  void bli_zinvscald ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const dcomplex* alpha, dcomplex* x, inc_t rs_x, inc_t cs_x );

 void bli_sscald ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const float* alpha, float* x, inc_t rs_x, inc_t cs_x );
  void bli_dscald ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const double* alpha, double* x, inc_t rs_x, inc_t cs_x );
  void bli_cscald ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const scomplex* alpha, scomplex* x, inc_t rs_x, inc_t cs_x );
  void bli_zscald ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const dcomplex* alpha, dcomplex* x, inc_t rs_x, inc_t cs_x );

 void bli_ssetd ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const float* alpha, float* x, inc_t rs_x, inc_t cs_x );
  void bli_dsetd ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const double* alpha, double* x, inc_t rs_x, inc_t cs_x );
  void bli_csetd ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const scomplex* alpha, scomplex* x, inc_t rs_x, inc_t cs_x );
  void bli_zsetd ( conj_t conjalpha, doff_t diagoffx, dim_t m, dim_t n, const dcomplex* alpha, dcomplex* x, inc_t rs_x, inc_t cs_x );

 void bli_ssetid ( doff_t diagoffx, dim_t m, dim_t n, const float* alpha, float* x, inc_t rs_x, inc_t cs_x );
  void bli_dsetid ( doff_t diagoffx, dim_t m, dim_t n, const double* alpha, double* x, inc_t rs_x, inc_t cs_x );
  void bli_csetid ( doff_t diagoffx, dim_t m, dim_t n, const float* alpha, scomplex* x, inc_t rs_x, inc_t cs_x );
  void bli_zsetid ( doff_t diagoffx, dim_t m, dim_t n, const double* alpha, dcomplex* x, inc_t rs_x, inc_t cs_x );

 void bli_sshiftd ( doff_t diagoffx, dim_t m, dim_t n, const float* alpha, float* x, inc_t rs_x, inc_t cs_x );
  void bli_dshiftd ( doff_t diagoffx, dim_t m, dim_t n, const double* alpha, double* x, inc_t rs_x, inc_t cs_x );
  void bli_cshiftd ( doff_t diagoffx, dim_t m, dim_t n, const scomplex* alpha, scomplex* x, inc_t rs_x, inc_t cs_x );
  void bli_zshiftd ( doff_t diagoffx, dim_t m, dim_t n, const dcomplex* alpha, dcomplex* x, inc_t rs_x, inc_t cs_x );

 void bli_sxpbyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const float* x, inc_t rs_x, inc_t cs_x, const float* beta, float* y, inc_t rs_y, inc_t cs_y );
  void bli_dxpbyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const double* x, inc_t rs_x, inc_t cs_x, const double* beta, double* y, inc_t rs_y, inc_t cs_y );
  void bli_cxpbyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const scomplex* x, inc_t rs_x, inc_t cs_x, const scomplex* beta, scomplex* y, inc_t rs_y, inc_t cs_y );
  void bli_zxpbyd ( doff_t diagoffx, diag_t diagx, trans_t transx, dim_t m, dim_t n, const dcomplex* x, inc_t rs_x, inc_t cs_x, const dcomplex* beta, dcomplex* y, inc_t rs_y, inc_t cs_y );

// end bli_l1d_tapi.h
// begin bli_l1d_ft.h
