
function ssssm(S1::GaussianShell,
               S2::GaussianShell,
               S3::GaussianShell,
               S4::GaussianShell,
               m::Int)
    ρ = _ρ(S1,S2,S3,S4)
    P = _P(S1,S2)
    Q = _Q(S3,S4)
    PQ = norm(P-Q)
    2*Fmx(m,ρ*PQ^2)*√(ρ/π)*S₁₂(shell)*S₃₄
end

_ζ(S1::GaussianShell,S2::GaussianShell) = S1.exp + S2.exp
_η(S3::GaussianShell,S4::GaussianShell) = S3.exp + S4.exp

function ρ(S1::GaussianShell,S2::GaussianShell,S3::GaussianShell,S4::GaussianShell)
    _ζ(S1,S2)*_η(S3,S4)/(_ζ(S1,S2) + _η(S3,S4))
end

_P(S1::GaussianShell,S2::GaussianShell) = (S1.exp .* S1.center + S2.exp .* S2.center)/_ζ(S1,S2)
_Q(S3::GaussianShell,S4::GaussianShell) = (S3.exp .* S3.center + S4.exp .* S4.center)/_η(S3,S4)

function S₁₂(S1::GaussianShell,S2::GaussianShell)
    p = 1*pi
    ζ = _ζ(shell)
    ζa = S1.exp
    ζb = S2.exp
    S12 = (p/ζ)^(3/2)*exp(-(ζa*ζb/ζ)*norm(S1.center, S2.center)^2)
end
function S₃₄(S3::GaussianShell,S4::GaussianShell)
    p = 1*pi
    η = _ζ(shell)
    ζc = S3.exp
    ζd = S4.exp
    S12 = (p/η)^(3/2)*exp(-(ζc*ζd/η)*norm(S3.center, S4.center)^2)
end


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
