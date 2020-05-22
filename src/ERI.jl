module ERI
using Lints
using Libdl

_libint2_need_memory_eri = dlsym(Lints.libint2,:libint2_need_memory_eri)
function libint2_need_memory_eri(_max_am::T) where T <: Integer
    max_am = convert(Cint,_max_am)
    ccall(_libint2_need_memory_eri,Cint,(Cint,),max_am)
end

function evaluate_eri_shell(inteval::Libint_t,
                            S1::ContractedGaussianShell,
                            S2::ContractedGaussianShell,
                            S3::ContractedGaussianShell,
                            S4::ContractedGaussianShell)
    for p1=1:S1.nprim, p2=1:S2.nprim, p3=1:S3.nprim, p4=1:S4.nprim
        for i=0:4*LIBINT2_MAX_ERI
    end
end

