#-------------------------------------------------------------------------------
# Purpose:     https://scipy-lectures.org/packages/sympy.html
# Author:      Cho
# Created:     2020-08-10
#-------------------------------------------------------------------------------

import sympy as sym
a = sym.Rational(1, 2)

print(f'a={a}')


print( sym.pi**2 )
print( sym.pi.evalf() ) # evalf evaluates the expression to a floating-point number.

# sym.oo 무한대

print( sym.oo > 99999 )
print( sym.oo + 1 )


