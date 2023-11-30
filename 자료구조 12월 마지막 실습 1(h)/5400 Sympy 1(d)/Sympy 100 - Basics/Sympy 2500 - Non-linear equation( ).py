#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-02
#-------------------------------------------------------------------------------


from sympy import *


# Non-linear equation
# we use nonlinsolve() function.
# a2+a=0
# a-b=0

a,b = symbols('a b')
sol = nonlinsolve([a**2 + a, a - b], [a, b])
print( sol )


sol = nonlinsolve([a**2 + b - 5, a - b**2 + 2], [a, b])
print( sol )