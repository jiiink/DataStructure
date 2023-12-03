from sympy import Function, rsolve
from sympy.abc import n


f = Function('f')

Fib  = f(n+2) - f(n+1) - f(n)
print(f' 수식 Fib= {Fib}')
RFib = rsolve(Fib, f(n))
print(f' rsolve Fib= {RFib}')


s2 = rsolve(Fib, f(n), {f(0): 0, f(1): 1})  # 초기조건
print(f' s2 = {s2}')