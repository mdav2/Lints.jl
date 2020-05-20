module Lints
using Libdl

const LIBINT2_MAX_VECLEN = 1
const REALTYPE = Float64

libint2 = C_NULL

function init()
    global libint2 = dlopen("/home/mmd01986/Downloads/libint-2.6.0/lib/.libs/libint2")
    _libint2_static_init = dlsym(libint2,:libint2_static_init)
    ccall(_libint2_static_init, Cvoid, ())
    return nothing
end

function close()
    _libint2_static_cleanup = dlsym(libint2,:libint2_static_cleanup)
end

include("Structs.jl")
include("Aux.jl")

end #module
