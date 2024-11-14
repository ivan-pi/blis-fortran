BLIS_EXPORT_BLIS void* bli_packm_alloc_ex_keep
     (
       siz_t      size_needed,
       packbuf_t  pack_buf_type,
       rntm_t*    rntm,
       cntl_t*    cntl,
       thrinfo_t* thread
     );

BLIS_EXPORT_BLIS void* bli_packm_alloc_ex
     (
       siz_t      size_needed,
       packbuf_t  pack_buf_type,
       rntm_t*    rntm,
       cntl_t*    cntl,
       thrinfo_t* thread
     );

BLIS_EXPORT_BLIS bool bli_obj_imag_is_zero( obj_t* a );
BLIS_EXPORT_BLIS bool bli_obz_imag_is_zero_keep( obj_t* a );
