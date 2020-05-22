macro struct_Libint_t(name,AM,VL,TYPE)
    fields = []
    push!(fields,:(PO2::NTuple{$VL,$TYPE}))
    for i in 0:2*AM
        fieldname = Symbol("_aB_s___0___ElecPot_s___0___Ab__up_",i)
        push!(fields,:($fieldname::NTuple{$VL,$TYPE}))
    end
    for i in 0:4*AM
        fieldname = Symbol("_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_",string(i))
        push!(fields,:($(fieldname)::NTuple{$VL,$TYPE}))
    end
    for i in ["AB","BA","BO",
              "CD","PA","PB",
                   "PC","PO",
              "QC","WP","WQ"], j in ["x","y","z"]
        fieldname = Symbol(i,"_",j)
        push!(fields,:($fieldname::NTuple{$VL,$TYPE}))
    end
    for i in ["x","y","z"]
        fieldname = Symbol("_0_Overlap_0_",i)
        push!(fields,:($fieldname::NTuple{$VL,$TYPE}))
    end
    for i in ["oo2e","oo2z","oo2ze",
              "roe","roz","two_alpha0_bra",
              "two_alpha0_ket"]
        push!(fields,:($(Symbol(i))::NTuple{$VL,$TYPE}))
    end
    push!(fields,:(stack::Ptr{$TYPE}))
    push!(fields,:(vstack::Ptr{$TYPE}))
    push!(fields,:(targets::NTuple{$(4*AM+1),Ptr{$TYPE}}))
    push!(fields,:(nflops::Ptr{Int64}))
    push!(fields,:(zero_out_targets::Int32))

    :(mutable struct $(esc(name))
          $(map(esc,fields)...)
      end)
end

macro Libint_t(name,AM,VL,TYPE)
    fields = []
    @eval begin
        push!($fields,Tuple(zeros($TYPE,$VL)))
        for i in 0:2*$AM
            push!($fields,Tuple(zeros($TYPE,$VL)))
        end
        for i in 0:4*$AM
            push!($fields,Tuple(zeros($TYPE,$VL)))
        end
        for i in 1:33
            push!($fields,Tuple(zeros($TYPE,$VL)))
        end
        for i in 1:3
            push!($fields,Tuple(zeros($TYPE,$VL)))
        end
        for i in 1:7
            push!($fields,Tuple(zeros($TYPE,$VL)))
        end
    end
    push!(fields,pointer(zeros(Float64,0)))
    push!(fields,pointer(zeros(Float64,0)))
    temp = []
    for i in 1:4*AM+1
        push!(temp,pointer(zeros(Float64,0)))
    end
    push!(fields,Tuple(temp))
    push!(fields,pointer(zeros(Int64,0)))
    push!(fields,0)
    :($name($fields...))
end

#macro Libint_t(name,AM,VL,TYPE)
#    fields = []
#    push!(fields,:q
#end
