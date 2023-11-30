#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-02
#-------------------------------------------------------------------------------


from sympy import *

from sympy.solvers.solveset import linsolve

x, y, z = symbols('x, y, z')

# List of Equations Form:
# x + y + z = 1
# x + y + 2z = 3

sol = linsolve([x + y + z - 1, x + y + 2*z - 3 ], (x, y, z))
print( sol)


sol = linsolve(Matrix(([1, 1, 1, 1], [1, 1, 2, 3])), (x, y, z))
print( sol )

# 행렬곱으로 주어지는 경우 ,예를 들면 A*x = b Form

M = Matrix(((1, 1, 1, 1), (1, 1, 2, 3)))
system = A, b = M[:, :-1], M[:, -1]
sol = linsolve(system, x, y, z)
print( sol )