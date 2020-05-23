
function_index(shell::GaussianShell) = shell.start
function set_function_index(shell::GaussianShell,i::Int) 
    shell.start = i
end


function ContractedGaussianShell(cf::ContractedFunction,puream::Bool)
    l = cf.l
    puream = puream
    shells = []
    for pf in cf.prims
        push!(shells,GaussianShell(pf,puream))
    end
end


