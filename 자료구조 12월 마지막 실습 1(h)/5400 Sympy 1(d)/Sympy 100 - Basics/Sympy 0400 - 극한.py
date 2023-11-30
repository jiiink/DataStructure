#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-02
#-------------------------------------------------------------------------------
"""
most frequently used: expand and simplify.
"""
import sympy as sym
#import math #math.sin

x = sym.Symbol('x')
y = sym.Symbol('y')

# Limits are easy to use in SymPy,
# they follow the syntax limit(function, variable, point),
# so to compute the limit of f(x) as x \rightarrow 0, you would issue limit(f, x, 0):


mylim = sym.limit(sym.sin(x) / x, x, 0)
print( "out1= ", mylim )

mylim = sym.limit(x, x, sym.oo)
print(  "out2= ", mylim )

mylim = sym.limit(1 / x, x, sym.oo)
print( "out3= ",  mylim )

mylim = sym.limit(x ** x, x, 0)
print(  "out4= ", mylim )