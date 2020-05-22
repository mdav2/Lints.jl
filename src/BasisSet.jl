struct BasisSet
    name_::String
    key_::String
    target_::String
    shells::Array{GaussianShell,1}
    ecp_shells::Array{GaussianShell,1}
    sortet_ao_shell_list::Array{Int,1}
    initialized_shared_::Bool

    #scalars
    nao::Int
    nbf_::Int
    n_uprimitive_::Int
    n_ecp_uprimitive_::Int
    nprimitive_::Int
    n_ecp_primitive_::Int
    max_am_::Int
    max_ecp_am_::Int
    max_nprimitive_::Int
    puream_::Bool

    #Arrays
    n_prim_per_shell_::Array{Int,1}
    shell_first_ao_::Array{Int,1}
    shell_first_basis_function_::Array{Int,1}
    shell_center_::Array{Int,1}
    ecp_shell_center_::Array{Int,1}
    function_to_shell_::Array{Int,1}
    ao_to_shell_::Array{Int,1}
    function_center_::Array{Int,1}
    center_to_nshell_::Array{Int,1}
    center_to_shell_::Array{Int,1}
    center_to_ecp_nshell_::Array{Int,1}
    center_to_ecp_shell_::Array{Int,1}

    uexponents_::Array{Float64,1}
    ucoefficients_::Array{Float64,1}
    uoriginal_coefficients_::Array{Float64,1}
    uecpexponents_::Array{Float64,1}
    uecpns_::Array{Float64,1}
    uerd_coefficients_::Array{Float64,1}
    xyz_::Array{Float64,1}
end
