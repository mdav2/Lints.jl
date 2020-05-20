module ERI
using Lints
using Libdl

_libint2_need_memory_eri = dlsym(Lints.libint2,:libint2_need_memory_eri)
function libint2_need_memory_eri(_max_am::T) where T <: Integer
    max_am = convert(Cint,_max_am)
    ccall(_libint2_need_memory_eri,Cint,(Cint,),max_am)
end

