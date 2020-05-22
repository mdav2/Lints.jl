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
    push!(fields,:(stack::Ptr{Cvoid}))
    push!(fields,:(vstack::Ptr{Cvoid}))
    push!(fields,:(targets::NTuple{$(4*AM+1),Ptr{Cvoid}}))
    push!(fields,:(veclen::Int32))
    #push!(fields,:(nflops::Ref{Int64}))
    #push!(fields,:(timers::Ptr{Cvoid}))
    #push!(fields,:(zero_out_targets::Int32))
    #push!(fields,:(cont

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
    push!(fields,C_NULL)
    push!(fields,C_NULL)
    temp = []
    for i in 1:4*AM+1
        push!(temp,C_NULL)
    end
    push!(fields,Tuple(temp))
    push!(fields,zero(Int32))
    #push!(fields,zeros(Int64,1))
    #push!(fields,C_NULL)
    #push!(fields,zero(Int32))
    :($name($fields...))
end

#macro Libint_t(name,AM,VL,TYPE)
#    fields = []
#    push!(fields,:q
#end
