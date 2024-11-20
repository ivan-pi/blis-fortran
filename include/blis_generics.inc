
! Level-1v
interface bli_addv
  procedure :: bli_saddv, bli_daddv, bli_caddv, bli_zaddv
end interface
interface bli_amaxv
  procedure :: bli_samaxv, bli_damaxv, bli_camaxv, bli_zamaxv
end interface
interface bli_axpyv
  procedure :: bli_saxpyv, bli_daxpyv, bli_caxpyv, bli_zaxpyv
end interface
interface bli_axpbyv
  procedure :: bli_saxpbyv, bli_daxpbyv, bli_caxpbyv, bli_zaxpbyv
end interface
interface bli_copyv
  procedure :: bli_scopyv, bli_dcopyv, bli_ccopyv, bli_zcopyv
end interface
interface bli_dotv
  procedure :: bli_sdotv, bli_ddotv, bli_cdotv, bli_zdotv
end interface
interface bli_dotxv
  procedure :: bli_sdotxv, bli_ddotxv, bli_cdotxv, bli_zdotxv
end interface
interface bli_invertv
  procedure :: bli_sinvertv, bli_dinvertv, bli_cinvertv, bli_zinvertv
end interface
interface bli_invscalv
  procedure :: bli_sinvscalv, bli_dinvscalv, bli_cinvscalv, bli_zinvscalv
end interface
interface bli_scalv
  procedure :: bli_sscalv, bli_dscalv, bli_cscalv, bli_zscalv
end interface
interface bli_scal2v
  procedure :: bli_sscal2v, bli_dscal2v, bli_cscal2v, bli_zscal2v
end interface
interface bli_setv
  procedure :: bli_ssetv, bli_dsetv, bli_csetv, bli_zsetv
end interface
interface bli_subv
  procedure :: bli_ssubv, bli_dsubv, bli_csubv, bli_zsubv
end interface
interface bli_swapv
  procedure :: bli_sswapv, bli_dswapv, bli_cswapv, bli_zswapv
end interface
interface bli_xpbyv
  procedure :: bli_sxpbyv, bli_dxpbyv, bli_cxpbyv, bli_zxpbyv
end interface

! Level-1d
interface bli_addd
  procedure :: bli_saddd, bli_daddd, bli_caddd, bli_zaddd
end interface
interface bli_axpyd
  procedure :: bli_saxpyd, bli_daxpyd, bli_caxpyd, bli_zaxpyd
end interface
interface bli_copyd
  procedure :: bli_scopyd, bli_dcopyd, bli_ccopyd, bli_zcopyd
end interface
interface bli_invertd
  procedure :: bli_sinvertd, bli_dinvertd, bli_cinvertd, bli_zinvertd
end interface
interface bli_invscald
  procedure :: bli_sinvscald, bli_dinvscald, bli_cinvscald, bli_zinvscald
end interface
interface bli_scald
  procedure :: bli_sscald, bli_dscald, bli_cscald, bli_zscald
end interface
interface bli_scal2d
  procedure :: bli_sscal2d, bli_dscal2d, bli_cscal2d, bli_zscal2d
end interface
interface bli_setd
  procedure :: bli_ssetd, bli_dsetd, bli_csetd, bli_zsetd
end interface
interface bli_setid
  procedure :: bli_ssetid, bli_dsetid, bli_csetid, bli_zsetid
end interface
interface bli_shiftd
  procedure :: bli_sshiftd, bli_dshiftd, bli_cshiftd, bli_zshiftd
end interface
interface bli_subd
  procedure :: bli_ssubd, bli_dsubd, bli_csubd, bli_zsubd
end interface
interface bli_xpbyd
  procedure :: bli_sxpbyd, bli_dxpbyd, bli_cxpbyd, bli_zxpbyd
end interface

! Level-1m
interface bli_addm
  procedure :: bli_saddm, bli_daddm, bli_caddm, bli_zaddm
end interface
interface bli_axpym
  procedure :: bli_saxpym, bli_daxpym, bli_caxpym, bli_zaxpym
end interface
interface bli_copym
  procedure :: bli_scopym, bli_dcopym, bli_ccopym, bli_zcopym
end interface
interface bli_invscalm
  procedure :: bli_sinvscalm, bli_dinvscalm, bli_cinvscalm, bli_zinvscalm
end interface
interface bli_scalm
  procedure :: bli_sscalm, bli_dscalm, bli_cscalm, bli_zscalm
end interface
interface bli_scal2m
  procedure :: bli_sscal2m, bli_dscal2m, bli_cscal2m, bli_zscal2m
end interface
interface bli_setm
  procedure :: bli_ssetm, bli_dsetm, bli_csetm, bli_zsetm
end interface
interface bli_subm
  procedure :: bli_ssubm, bli_dsubm, bli_csubm, bli_zsubm
end interface

! Level-1f
interface bli_axpy2v
  procedure :: bli_saxpy2v, bli_daxpy2v, bli_caxpy2v, bli_zaxpy2v
end interface
interface bli_dotaxpyv
  procedure :: bli_sdotaxpyv, bli_ddotaxpyv, bli_cdotaxpyv, bli_zdotaxpyv
end interface
interface bli_axpyf
  procedure :: bli_saxpyf, bli_daxpyf, bli_caxpyf, bli_zaxpyf
end interface
interface bli_dotxf
  procedure :: bli_sdotxf, bli_ddotxf, bli_cdotxf, bli_zdotxf
end interface
interface bli_dotxaxpyf
  procedure :: bli_sdotxaxpyf, bli_ddotxaxpyf, bli_cdotxaxpyf, bli_zdotxaxpyf
end interface

! Level-2
interface bli_gemv
  procedure :: bli_sgemv, bli_dgemv, bli_cgemv, bli_zgemv
end interface
interface bli_ger
  procedure :: bli_sger, bli_dger, bli_cger, bli_zger
end interface
interface bli_hemv
  procedure :: bli_shemv, bli_dhemv, bli_chemv, bli_zhemv
end interface
interface bli_her
  procedure :: bli_sher, bli_dher, bli_cher, bli_zher
end interface
interface bli_her2
  procedure :: bli_sher2, bli_dher2, bli_cher2, bli_zher2
end interface
interface bli_symv
  procedure :: bli_ssymv, bli_dsymv, bli_csymv, bli_zsymv
end interface
interface bli_syr
  procedure :: bli_ssyr, bli_dsyr, bli_csyr, bli_zsyr
end interface
interface bli_syr2
  procedure :: bli_ssyr2, bli_dsyr2, bli_csyr2, bli_zsyr2
end interface
interface bli_trmv
  procedure :: bli_strmv, bli_dtrmv, bli_ctrmv, bli_ztrmv
end interface
interface bli_trsv
  procedure :: bli_strsv, bli_dtrsv, bli_ctrsv, bli_ztrsv
end interface

! Level-3
interface bli_gemm
  procedure :: bli_sgemm, bli_dgemm, bli_cgemm, bli_zgemm
end interface
interface bli_hemm
  procedure :: bli_shemm, bli_dhemm, bli_chemm, bli_zhemm
end interface
interface bli_herk
  procedure :: bli_sherk, bli_dherk, bli_cherk, bli_zherk
end interface
interface bli_her2k
  procedure :: bli_sher2k, bli_dher2k, bli_cher2k, bli_zher2k
end interface
interface bli_symm
  procedure :: bli_ssymm, bli_dsymm, bli_csymm, bli_zsymm
end interface
interface bli_syrk
  procedure :: bli_ssyrk, bli_dsyrk, bli_csyrk, bli_zsyrk
end interface
interface bli_syr2k
  procedure :: bli_ssyr2k, bli_dsyr2k, bli_csyr2k, bli_zsyr2k
end interface
interface bli_trmm
  procedure :: bli_strmm, bli_dtrmm, bli_ctrmm, bli_ztrmm
end interface
interface bli_trmm3
  procedure :: bli_strmm3, bli_dtrmm3, bli_ctrmm3, bli_ztrmm3
end interface
interface bli_trsm
  procedure :: bli_strsm, bli_dtrsm, bli_ctrsm, bli_ztrsm
end interface

! Utility
interface bli_asumv
  procedure :: bli_sasumv, bli_dasumv, bli_casumv, bli_zasumv
end interface
interface bli_norm1v
  procedure :: bli_snorm1v, bli_dnorm1v, bli_cnorm1v, bli_znorm1v
end interface
interface bli_normfv
  procedure :: bli_snormfv, bli_dnormfv, bli_cnormfv, bli_znormfv
end interface
interface bli_normiv
  procedure :: bli_snormiv, bli_dnormiv, bli_cnormiv, bli_znormiv
end interface
interface bli_norm1m
  procedure :: bli_snorm1m, bli_dnorm1m, bli_cnorm1m, bli_znorm1m
end interface
interface bli_normfm
  procedure :: bli_snormfm, bli_dnormfm, bli_cnormfm, bli_znormfm
end interface
interface bli_normim
  procedure :: bli_snormim, bli_dnormim, bli_cnormim, bli_znormim
end interface
interface bli_mkherm
  procedure :: bli_smkherm, bli_dmkherm, bli_cmkherm, bli_zmkherm
end interface
interface bli_mksymm
  procedure :: bli_smksymm, bli_dmksymm, bli_cmksymm, bli_zmksymm
end interface
interface bli_mktrim
  procedure :: bli_smktrim, bli_dmktrim, bli_cmktrim, bli_zmktrim
end interface
interface bli_fprintv
  procedure :: bli_sfprintv, bli_dfprintv, bli_cfprintv, bli_zfprintv
end interface
interface bli_fprintm
  procedure :: bli_sfprintm, bli_dfprintm, bli_cfprintm, bli_zfprintm
end interface
interface bli_printv
  procedure :: bli_sprintv, bli_dprintv, bli_cprintv, bli_zprintv
end interface
interface bli_printm
  procedure :: bli_sprintm, bli_dprintm, bli_cprintm, bli_zprintm
end interface
interface bli_randv
  procedure :: bli_srandv, bli_drandv, bli_crandv, bli_zrandv
end interface
interface bli_randm
  procedure :: bli_srandm, bli_drandm, bli_crandm, bli_zrandm
end interface
interface bli_sumsqv
  procedure :: bli_ssumsqv, bli_dsumsqv, bli_csumsqv, bli_zsumsqv
end interface
interface bli_getsc
  procedure :: bli_sgetsc, bli_dgetsc, bli_cgetsc, bli_zgetsc
end interface
interface bli_getijv
  procedure :: bli_sgetijv, bli_dgetijv, bli_cgetijv, bli_zgetijv
end interface
interface bli_getijm
  procedure :: bli_sgetijm, bli_dgetijm, bli_cgetijm, bli_zgetijm
end interface
interface bli_setsc
  procedure :: bli_ssetsc, bli_dsetsc, bli_csetsc, bli_zsetsc
end interface
interface bli_setijv
  procedure :: bli_ssetijv, bli_dsetijv, bli_csetijv, bli_zsetijv
end interface
interface bli_setijm
  procedure :: bli_ssetijm, bli_dsetijm, bli_csetijm, bli_zsetijm
end interface
interface bli_eqsc
  procedure :: bli_seqsc, bli_deqsc, bli_ceqsc, bli_zeqsc
end interface
interface bli_eqv
  procedure :: bli_seqv, bli_deqv, bli_ceqv, bli_zeqv
end interface
interface bli_eqm
  procedure :: bli_seqm, bli_deqm, bli_ceqm, bli_zeqm
end interface
