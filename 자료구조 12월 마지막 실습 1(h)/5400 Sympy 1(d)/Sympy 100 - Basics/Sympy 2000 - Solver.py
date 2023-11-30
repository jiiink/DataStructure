#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-02
#-------------------------------------------------------------------------------


from __future__ import division
from sympy import *
x, y, z, t = symbols('x y z t')
k, m, n = symbols('k m n', integer=True)
f, g, h = symbols('f g h', cls=Function)

print( Eq(x, y) )

a1 = solveset(Eq(x**2, 1), x)
a2 = solveset(Eq(x**2 - 1, 0), x)
a3 = solveset(x**2 - 1, x)

# 대수적으로 해를 구하기
a4 = solveset(x**2 - x, x)
a5 = solveset(x - x, x, domain=S.Reals)
a6 = solveset(sin(x) - 1, x, domain=S.Reals)


for w in [a1, a2, a3, a4, a5, a6]:
    print(w)


