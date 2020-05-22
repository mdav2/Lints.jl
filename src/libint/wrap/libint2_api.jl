# Julia wrapper for header: libint2.h
# Automatically generated using Clang.jl

# Julia wrapper for header: libint2_iface.h
# Automatically generated using Clang.jl


function libint2_static_init()
    ccall((:libint2_static_init, libint2), Cvoid, ())
end

function libint2_static_cleanup()
    ccall((:libint2_static_cleanup, libint2), Cvoid, ())
end

function libint2_init_default(inteval, max_am, buf)
    ccall((:libint2_init_default, libint2), Cvoid, (Ptr{Cint}, Cint, Ptr{Cvoid}), inteval, max_am, buf)
end

function libint2_need_memory_default(max_am)
    ccall((:libint2_need_memory_default, libint2), Csize_t, (Cint,), max_am)
end

function libint2_cleanup_default(inteval)
    ccall((:libint2_cleanup_default, libint2), Cvoid, (Ptr{Cint},), inteval)
end

function libint2_init_overlap(inteval, max_am, buf)
    ccall((:libint2_init_overlap, libint2), Cvoid, (Ptr{Cint}, Cint, Ptr{Cvoid}), inteval, max_am, buf)
end

function libint2_need_memory_overlap(max_am)
    ccall((:libint2_need_memory_overlap, libint2), Csize_t, (Cint,), max_am)
end

function libint2_cleanup_overlap(inteval)
    ccall((:libint2_cleanup_overlap, libint2), Cvoid, (Ptr{Cint},), inteval)
end

function libint2_init_kinetic(inteval, max_am, buf)
    ccall((:libint2_init_kinetic, libint2), Cvoid, (Ptr{Cint}, Cint, Ptr{Cvoid}), inteval, max_am, buf)
end

function libint2_need_memory_kinetic(max_am)
    ccall((:libint2_need_memory_kinetic, libint2), Csize_t, (Cint,), max_am)
end

function libint2_cleanup_kinetic(inteval)
    ccall((:libint2_cleanup_kinetic, libint2), Cvoid, (Ptr{Cint},), inteval)
end

function libint2_init_elecpot(inteval, max_am, buf)
    ccall((:libint2_init_elecpot, libint2), Cvoid, (Ptr{Cint}, Cint, Ptr{Cvoid}), inteval, max_am, buf)
end

function libint2_need_memory_elecpot(max_am)
    ccall((:libint2_need_memory_elecpot, libint2), Csize_t, (Cint,), max_am)
end

function libint2_cleanup_elecpot(inteval)
    ccall((:libint2_cleanup_elecpot, libint2), Cvoid, (Ptr{Cint},), inteval)
end

function libint2_init_1emultipole(inteval, max_am, buf)
    ccall((:libint2_init_1emultipole, libint2), Cvoid, (Ptr{Cint}, Cint, Ptr{Cvoid}), inteval, max_am, buf)
end

function libint2_need_memory_1emultipole(max_am)
    ccall((:libint2_need_memory_1emultipole, libint2), Csize_t, (Cint,), max_am)
end

function libint2_cleanup_1emultipole(inteval)
    ccall((:libint2_cleanup_1emultipole, libint2), Cvoid, (Ptr{Cint},), inteval)
end

function libint2_init_2emultipole(inteval, max_am, buf)
    ccall((:libint2_init_2emultipole, libint2), Cvoid, (Ptr{Cint}, Cint, Ptr{Cvoid}), inteval, max_am, buf)
end

function libint2_need_memory_2emultipole(max_am)
    ccall((:libint2_need_memory_2emultipole, libint2), Csize_t, (Cint,), max_am)
end

function libint2_cleanup_2emultipole(inteval)
    ccall((:libint2_cleanup_2emultipole, libint2), Cvoid, (Ptr{Cint},), inteval)
end

function libint2_init_3emultipole(inteval, max_am, buf)
    ccall((:libint2_init_3emultipole, libint2), Cvoid, (Ptr{Cint}, Cint, Ptr{Cvoid}), inteval, max_am, buf)
end

function libint2_need_memory_3emultipole(max_am)
    ccall((:libint2_need_memory_3emultipole, libint2), Csize_t, (Cint,), max_am)
end

function libint2_cleanup_3emultipole(inteval)
    ccall((:libint2_cleanup_3emultipole, libint2), Cvoid, (Ptr{Cint},), inteval)
end

function libint2_init_sphemultipole(inteval, max_am, buf)
    ccall((:libint2_init_sphemultipole, libint2), Cvoid, (Ptr{Cint}, Cint, Ptr{Cvoid}), inteval, max_am, buf)
end

function libint2_need_memory_sphemultipole(max_am)
    ccall((:libint2_need_memory_sphemultipole, libint2), Csize_t, (Cint,), max_am)
end

function libint2_cleanup_sphemultipole(inteval)
    ccall((:libint2_cleanup_sphemultipole, libint2), Cvoid, (Ptr{Cint},), inteval)
end

function libint2_init_eri(inteval, max_am, buf)
    ccall((:libint2_init_eri, libint2), Cvoid, (Ptr{Cint}, Cint, Ptr{Cvoid}), inteval, max_am, buf)
end

function libint2_need_memory_eri(max_am)
    ccall((:libint2_need_memory_eri, libint2), Csize_t, (Cint,), max_am)
end

function libint2_cleanup_eri(inteval)
    ccall((:libint2_cleanup_eri, libint2), Cvoid, (Ptr{Cint},), inteval)
end
# Julia wrapper for header: libint2_iface_internal.h
# Automatically generated using Clang.jl

# Julia wrapper for header: libint2_params.h
# Automatically generated using Clang.jl

# Julia wrapper for header: libint2_types.h
# Automatically generated using Clang.jl

