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

fx = sym.cos(x)*sym.sin(x**2)/(x**2 + sym.log(x))
print(f" fx= {fx}")


# 고차 미분을 하는 방법 diff(func, var, n) method:
fx1 = sym.diff(  fx, x, 1)
print(f"fx1={fx1}")
print(f"fx1(1)={fx1.subs(x,1)}")
print(f"sym.N(fx1(1))={sym.N(fx1.subs(x,1))}")

fx2 = sym.diff(  fx, x, 2)
print(f"fx2={fx2}")
print(f"fx2(1)={fx1.subs(x,1)}")
print(f"sym.N(fx2(1))={sym.N(fx2.subs(x,1))}")
