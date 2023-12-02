#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-02
#-------------------------------------------------------------------------------
"""
most frequently used: expand and simplify.
"""
import sympy as sym

x = sym.Symbol('x')
y = sym.Symbol('y')

# SymPy has support for indefinite and definite integration
# of transcendental elementary and special functions via integrate() facility,
# 사용된 방법은 Risch-Norman algorithm이다

d1 = sym.integrate(6 * x ** 5, x)
d2 = sym.integrate(sym.sin(x), x)
d3 = sym.integrate(sym.log(x), x)
d4 = sym.integrate(2 * x + sym.sinh(x), x)


# 특수함수도 다를 수 있다.

d5 = sym.integrate(sym.exp(-x ** 2) * sym.erf(x), x)

# 유한적분도 가능하다. e definite integral:

d6 = sym.integrate(x**3, (x, -1, 1))
d7 = sym.integrate(sym.sin(x), (x, 0, sym.pi / 2))
d8 = sym.integrate(sym.cos(x), (x, -sym.pi / 2, sym.pi / 2))

# improper integrals도 가능하다.

d9 = sym.integrate(sym.exp(-x), (x, 0, sym.oo))
d10 = sym.integrate(sym.exp(-x ** 2), (x, -sym.oo, sym.oo))

for (i,w) in enumerate([d1, d2, d3, d4, d5, d6, d7, d8, d9, d10]) :
    print(i+1, ": ",  w)