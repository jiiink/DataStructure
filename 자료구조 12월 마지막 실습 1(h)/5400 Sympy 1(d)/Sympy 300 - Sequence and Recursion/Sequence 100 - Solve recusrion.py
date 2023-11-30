from sympy import *

y = Function('y')
n = symbols('n',integer=True)

g = y(n)-y(n-1)-2
Out = rsolve( g, y(n), {y(1):1})
print(f"g(n)= {Out}")



w = y(n)-y(n-1)*2
Out = rsolve( w, y(n), {y(1):1})
print(f"w(n)= {Out}")




f = y(n)-y(n-1)-y(n-2)
Out = rsolve(f, y(n), {y(0):0, y(1):1})
print(f"f(n)= {Out}")


