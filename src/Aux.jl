module Aux
import Lints: Shell,Center
    function norm(a,b)
        return sqrt(sum((a-b).^2))
    end
    
    function Fmx(m,x)
        if m != 0
            return (1/(2*x))*((2*m-1)*_Fm(m-1,x)-exp(-x))
        else
            f(t) = exp(-x*t^2)
            return quadgk(f,0,1,rtol=1E-14)[1]
        end
    end
    
    _ζ(shell::Shell) = shell.A.ζ + shell.B.ζ
    _η(shell::Shell) = shell.C.ζ + shell.D.ζ
    _ρ(shell::Shell) = _ζ(shell)*_η(shell)/(_ζ(shell) + _η(shell))
    _P(shell::Shell) = (shell.A.ζ .* shell.A.x + shell.B.ζ .* shell.B.x)/_ζ(shell)
    _Q(shell::Shell) = (shell.C.ζ .* shell.C.x + shell.D.ζ .* shell.D.x)/_η(shell)
    
    function S₁₂(shell::Shell)
        p = 1*pi
        ζ = _ζ(shell)
        ζa = shell.A.ζ
        ζb = shell.B.ζ
        S12 = (p/ζ)^(3/2)*exp(-(ζa*ζb/ζ)*norm(shell.A.x, shell.B.x)^2)
    end
    function S₃₄(shell::Shell)
        p = 1*pi
        η = _ζ(shell)
        ζc = shell.C.ζ
        ζd = shell.D.ζ
        S12 = (p/η)^(3/2)*exp(-(ζc*ζd/η)*norm(shell.C.x, shell.D.x)^2)
    end
    
    function ssssm(shell::Shell,m)
        ρ = _ρ(shell)
        PQ = norm(P-Q)
        2*Fmx(m,ρ*PQ^2)*√(ρ/π)*S₁₂(shell)*S₃₄
    end
end #module
