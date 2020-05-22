using Clang

const LIBINT_INCLUDE = joinpath(pwd(),"../include")
const LIBINT_HEADERS = [joinpath(LIBINT_INCLUDE,header) for header in readdir(LIBINT_INCLUDE) if endswith(header, ".h")]

wc = init(; headers = LIBINT_HEADERS,
            output_file = joinpath(@__DIR__,"libint2_api.jl"),
            common_file = joinpath(@__DIR__,"libint2_common.jl"),
            clang_includes = vcat(LIBINT_INCLUDE,CLANG_INCLUDE),
            clang_args = ["-I", joinpath(LIBINT_INCLUDE,"..")],
            header_wrapped = (root,current) -> root==current,
            header_library = x->"libint2"
           )

run(wc)

