module Lints
using Libdl

const LIBINT2_MAX_VECLEN = 1
const LIBINT2_MAX_ERI = 7
const REALTYPE = Float64

libint2 = C_NULL
LIBINT_PATH = "libint/liblibint2.so"
LIB_FULL_PATH = joinpath(dirname(pathof(Lints)),LIBINT_PATH)

function init()
    global libint2 = dlopen(LIB_FULL_PATH)
    _libint2_static_init = dlsym(libint2,:libint2_static_init)
    ccall(_libint2_static_init, Cvoid, ())
    return nothing
end

init()

function close()
    _libint2_static_cleanup = dlsym(libint2,:libint2_static_cleanup)
    ccall(_libint2_static_cleanup,Cvoid,())
    global libint2 = C_NULL
    return nothing
end

#include("libint/wrap/libint2_api.jl")
#include("libint/wrap/libint2_common.jl")
include("Libint_t.jl")
@struct_Libint_t(Libint_t,7,1,Float64)
include("GaussianShell.jl")
include("BasisSet.jl")
include("Molecule.jl")
include("Aux.jl")
_libint2_init_eri = dlsym(libint2,:libint2_init_eri)
_libint2_init_default = dlsym(libint2,:libint2_init_default)
function libint2_init_eri(libint::Lints.Libint_t, max_am, buf)
    ccall(_libint2_init_eri,Cvoid,(Lints.Libint_t,Cint,Ptr{Float64}),libint,max_am,buf)
end
function libint2_init_default(libint::Lints.Libint_t, max_am, buf)
    ccall(_libint2_init_default,Cvoid,(Lints.Libint_t,Cint,Cint),libint,max_am,buf)
end

end #module
