struct ShellType
    x::Int
end

struct GaussianShell
    l::Int #angular momentum
    puream::Bool
    exp::Array{Float64,1}
    original_coef::Array{Float64,1}
    coef::Array{Float64,1}
    erd_coef::Array{Float64,1}
    n::Array{Int,1}

    #shelltype::ShellType
    nc::Int
    center::Array{Float64,1} #location
    start::Int

    ncartesian::Int
    nprimitive::Int
    nfunction::Int
end

struct ContractedGaussianShell
    puream::Bool
    shells::Array{GaussianShell,1}
end

struct BasisSet
    name::String
    target::String
    shells::Array{ContractedGaussianShell,1}

    #scalars
    nao::Int
    nbf::Int
    nprimitive::Int
    max_am::Int
    max_nprimitive::Int
    puream::Bool
end

struct PrimFunction
    exp::Float64
    coef::Float64
end

struct ContractedFunction
    l::Int8
    n::Int8
    prims::Array{PrimFunction,1}
end

struct BasisData
    name::String
    target::String
    puream::Bool
    funcs::Dict{Int8,Array{ContractedFunction,1}}
end

struct Molecule
    Z::Array{Float64,1} #nuclear charges
    X::Array{Float64,2} #positions of atoms
end
