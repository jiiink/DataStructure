#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-02
#-------------------------------------------------------------------------------

import sympy as sym
x = sym.Symbol('x')
y = sym.Symbol('y')


out1 = x + y - x + y
out2 = (x + y) ** 2
out3 = 2*x - 2*y

print(f'out1={out1}')
print(f'out2={out2}')
print(f'out1*out2={out1*out2}')
print(f'out1*out3={out1*out3}')

print( f'out1(2,4)= { out1.subs(x,2).subs(y,4)}')
print( f'out2(5,2)= { out2.subs(x,5).subs(y,2)}')
print( f'out3(1,-2)= { out3.subs(x,1).subs(y,-2)}')
print( f'out1(2,0.345)= { out1.subs(x,2).subs(y,0.345)}')