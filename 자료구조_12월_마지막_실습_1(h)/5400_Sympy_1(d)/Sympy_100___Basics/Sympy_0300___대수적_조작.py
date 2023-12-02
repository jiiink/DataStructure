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

Out1 = sym.expand((x + y) ** 3 )

Out2 = sym.expand(x + y, complex=True)  # 복소수 처리

Out3 = sym.I * sym.im(x) + sym.I * sym.im(y) + sym.re(x) + sym.re(y)

Out4 = sym.expand(sym.cos(x + y), trig=True) # Trigometry, 삼각함수

Out5 = sym.cos(x) * sym.cos(y) - sym.sin(x) * sym.sin(y)

All = [ Out1, Out2, Out3, Out4, Out5 ]

for w in All :
    print(w)


print( sym.simplify((x + x * y) / x) )
print( sym.sin(x)/ sym.cos(x ))
print( 1/(sym.sin(x)/ sym.cos(x )))
print( sym.simplify(sym.sin(x)/ sym.cos(x )))
print( sym.simplify(1/(sym.sin(x)/ sym.cos(x ))))