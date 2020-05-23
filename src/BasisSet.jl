

function BasisSet(basis::BasisData,mol::Lints.Molecule)
    #construct list of center,coeff,exp,n values for each shell
    #
    #loop over list, collect shells into contracted shells,
    #add contracted shell to BasisSet.shells
    #   add to nprimitive
    #   if shell am greater than max am, update
    #   ""                      max_primitive, update
    #
    shells = Array{ContractedGaussianShell}(undef,0)
    nao = 0
    nbf = 0
    max_am = 0
    max_nprimitive = 0
    nprim = 0
    for center in mol.xyz
        ContrFuncs = basis.funcs[center.Z]
        for cf in ContrFuncs
            shell = ContractedGaussianShell(cf)
            push!(shells,shell)
            nao += Lints.Util.nao[cf.l]
            nbf += Lints.Util.nbf[cf.l]
            nprim += cf.nprim*Lints.Util.nbf[cf.l]
            cf.l > max_am ? max_am = cf.l : nothing
            cf.nprim > max_nprimitive ? max_nprimitive = cf.nprim : nothing
        end
    end
    BasisSet(basis.name,basis.target,shells,
             nao,nbf,nprim,
             max_am,max_nprimitive,basis.puream)
end
