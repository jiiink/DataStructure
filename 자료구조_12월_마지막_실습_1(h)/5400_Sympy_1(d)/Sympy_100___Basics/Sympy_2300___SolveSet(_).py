#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-02
#-------------------------------------------------------------------------------


from sympy import *


x, y, z = symbols('x, y, z')

#
# solveset(equation, variable, domain)

sol = solveset(Eq(x**2-9,0), x)
print( sol )

sol = solveset(Eq(x**2+x+1,0), x)
print( sol )
sol = solveset(Eq(x**2-3*x, -2),x)
print( sol )

sol =  solveset(exp(x)-1,x)
print( sol )