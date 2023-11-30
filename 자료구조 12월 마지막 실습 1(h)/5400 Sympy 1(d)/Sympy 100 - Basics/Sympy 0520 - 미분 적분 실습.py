#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-08-10
#-------------------------------------------------------------------------------
import sympy
import numpy as np
import matplotlib.pyplot as plt

# basic
x, y, z, dx = sympy.symbols("x y z dx")
f = sympy.exp(x) + x*y
print(f)
# function에 2개 이상의 symbol이 있기 때문에, 편미분만 가능합니다.
print("differentiation: {}, integration of diff: {}".format(
    sympy.diff(f, x), sympy.integrate(sympy.diff(f, x), x)
))

f = (x-2)*x*(x+2)
f_diff = sympy.diff(f, x)
f_diff_diff = sympy.diff(f_diff, x)
print('solution set')
print("-------")
print("solution set: {}".format(sympy.solve(f))) #단 필요에 따라, datatype을 바꾸어주는 것이 필요함
print("solution set: {}".format(sympy.solve(f_diff)))
print("-------")
"""
- 방정식에 값을 넣어서 계산해줄 때는 subs와 evalf를 사용
    - subs: 특정 symbol에 값을 넣어줌. 물론 값뿐만 아니라 다른 변수의 조합으로 넣어도 상관없음
    - evalf: 그 값을 float 결과로 변환
"""
print()
print("diff value by limit")
print("-------")
for a in sympy.solve(f_diff):
    print("a: {}".format(a))
    print(f_diff.subs(x, a).evalf())
    # x를 x+dx로 바꿔주고, dx가 0으로 갈때의 diff 값을 limit를 사용해서 계산하려 한다.
    diff_by_limit = sympy.limit((f.subs(x, x+dx) - f.subs(x, x))/ (x+dx - x), dx, 0.000001)
    print(diff_by_limit.subs(x, a).evalf())
    print("-------")

print("integration")
print(sympy.integrate(f))
print(sympy.integrate(sympy.diff(f)))
