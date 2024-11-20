"""
Print the list of generic Fortran generic procedures
"""

operations = {
    "Level-1v": [
        "addv", "amaxv", "axpyv", "axpbyv", "copyv", "dotv", "dotxv", "invertv", 
        "invscalv", "scalv", "scal2v", "setv", "subv", "swapv", "xpbyv"
    ],
    "Level-1d": [
        "addd", "axpyd", "copyd", "invertd", "invscald", "scald", "scal2d", 
        "setd", "setid", "shiftd", "subd", "xpbyd"
    ],
    "Level-1m": [
        "addm", "axpym", "copym", "invscalm", "scalm", "scal2m", "setm", "subm"
    ],
    "Level-1f": [
        "axpy2v", "dotaxpyv", "axpyf", "dotxf", "dotxaxpyf"
    ],
    "Level-2": [
        "gemv", "ger", "hemv", "her", "her2", "symv", "syr", "syr2", "trmv", "trsv"
    ],
    "Level-3": [
        "gemm", "hemm", "herk", "her2k", "symm", "syrk", "syr2k", "trmm", 
        "trmm3", "trsm"
    ],
    "Utility": [
        "asumv", "norm1v", "normfv", "normiv", "norm1m", "normfm", "normim", 
        "mkherm", "mksymm", "mktrim", "fprintv", "fprintm", "printv", "printm", 
        "randv", "randm", "sumsqv", "getsc", "getijv", "getijm", "setsc", 
        "setijv", "setijm", "eqsc", "eqv", "eqm"
    ]
}

types = ['s','d','c','z']
pretty_generic = False

if pretty_generic:
    for level, ops in operations.items():
        print(f"\n! {level}")
        for op in ops:
            typed_ops = ', '.join(f"bli_{t}{op}" for t in types)
            print(f"generic :: bli_{op} => {typed_ops}")
else:
    for level, ops in operations.items():
        print(f"\n! {level}")
        for op in ops:
            print(f"interface bli_{op}")
            typed_ops = ', '.join(f"bli_{t}{op}" for t in types)
            print(f"  procedure :: {typed_ops}")
            print(f"end interface")