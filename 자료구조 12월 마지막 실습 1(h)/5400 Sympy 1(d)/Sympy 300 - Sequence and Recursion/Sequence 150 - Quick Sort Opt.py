from sympy import Function, rsolve
from sympy.abc import n


T = Function('T')

Quick  = T(n) - T(n-1) - (n-1)
print(f' 수식 T(n)= { Quick}')
RQuick = rsolve( Quick, T(n), {T(1):1})
print(f' RQuick= { RQuick }')




