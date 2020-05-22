#gshell.c = psi4/libmints/gshell.c
struct ShellInfo
    l::Int
    puream::Bool
    exp::Array{Float64,1}
    coef::Array{Float64,1}
    n::Array{Int,1}
    erd_coef::Array{Float64,1}
    original_coef::Array{Float64,1}
    shelltype::Int #0 -> Gaussian, 1 -> ECPType1, 2 -> ECPType2
    ncartesian::Int
    nfunction::Int
end

function ShellInfo(am::Int,c::Array{Float64,1},e::Array{Float64,1},n::Array{Int,1})
    puream=false
    exp=e
    coef=c
    if am < 0
        shelltype = 1
        l = -am
    else
        shelltype = 2
        l = am
    end

    original_coef = Array{Float64}(undef,0)
    coef = Array{Float64}(undef,0)
    erd_coef = Array{Float64}(undef,0)

    for prim=1:length(coef)
        push!(original_coef,coef[prim])
        push!(coef,coef[prim])
        push!(erd_coef,coef[prim])
    end

    ncartesian=INT_NCART(l)
    nfunction = INT_NFUC(puream,l)

    ShellInfo(l,puream,exp,coef,n,erd_coef,original_coef,shelltype,ncartesian,nfunction)
end

function ShellInfo(am::Int,c::Array{Float64,1},e::Array{Float64,1},pure::Bool,pt::Bool)
    #gshell.cc:60
end

function primitive_normalization(SI::ShellInfo,p::Int)::nothing
    #gshell.c:78
    tmp1 = SI.l + 1.5
    g = 2 * SI.exp[p]
    z = g^tmp1
    #norm
end

function erd_normalize_shell(SI::ShellInfo)::nothing
    #gshell.c:86
end

function contraction_normalization(SI::ShellInfo)::nothing
    #gshell.c:110
end

function normalize_shell(SI::ShellInfo)::nothing
    #gshell.c::132
end
