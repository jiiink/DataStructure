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

# Taylor series of an expression at a point.
# Use series(expr, var):

d1 = sym.series(sym.cos(x), x)
d2 = sym.series(sym.sin(x), x)
d3 = sym.series(1/sym.cos(x), x)
d4 = sym.series(sym.log(10,x), x)


for (i,w) in enumerate([d1, d2, d3, d4]) :
    print(i+1, ": ",  w)