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

# 미분하는 함수 diff(func, var). Examples:


d1 = sym.diff(sym.sin(x), x)
d2 = sym.diff(sym.sin(2 * x), x)
d3 = sym.diff(sym.tan(x), x)


# You can check, that it is correct by:
d4 = sym.limit((sym.tan(x + y) - sym.tan(x)) / y, y, 0)



# 고차 미분을 하는 방법 diff(func, var, n) method:
d5 = sym.diff(sym.sin(2 * x), x, 1)
d6 = sym.diff(sym.sin(2 * x), x, 2) # 미분 2번
d7 = sym.diff(sym.sin(2 * x), x, 3)

for (i,w) in enumerate([d1, d2, d3, d4, d5, d6, d7]) :
    print(i+1, ": ",  w)