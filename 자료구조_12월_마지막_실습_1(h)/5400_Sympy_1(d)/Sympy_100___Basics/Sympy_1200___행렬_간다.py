#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-02
#-------------------------------------------------------------------------------
"""
most frequently used: expand and simplify.
"""
import sympy as sym


m1 = sym.Matrix([[1, 0], [0, 1]])
print(f'm1={m1}')


# NumPy array와 달린 기호를 사용할 수 있다.

x, y = sym.symbols('x, y')
A = sym.Matrix([[1, x], [y, 1]])
print(f'A= {A}')


M = sym.Matrix(( [1, 2, 3], [3, 6, 2], [2, 0, 1] ))
print("Determinant= ", M.det())
V= M.inv()
print("M의 inverse= ", V )

print("M*M^-1 = ", M*V )



