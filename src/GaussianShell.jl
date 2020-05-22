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

    shelltype::ShellType
    nc::Int
    center::Array{Float64,1} #location
    start::Int

    ncartesian::Int
    nprimitive::Int
    nfunction::Int
end

function_index(shell::GaussianShell) = shell.start
function set_function_index(shell::GaussianShell,i::Int) 
    shell.start = i
end

struct ContractedGaussianShell
    nprim::Int
    shells::Array{GaussianShell,1}
end

