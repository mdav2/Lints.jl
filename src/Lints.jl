module Lints
using Libdl

const LIBINT2_MAX_VECLEN = 1
const LIBINT2_MAX_ERI = 4
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

function close()
    _libint2_static_cleanup = dlsym(libint2,:libint2_static_cleanup)
end

include("Libint_t.jl")
include("GaussianShell.jl")
include("BasisSet.jl")
include("Molecule.jl")
include("Aux.jl")

end #module
