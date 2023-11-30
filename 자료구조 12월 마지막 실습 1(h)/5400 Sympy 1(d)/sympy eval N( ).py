#-------------------------------------------------------------------------------
# Name:        module1
# Author:      algor
#-------------------------------------------------------------------------------

from sympy import *

init_session()  # 끝때는 exit()

a= sqrt(2)*pi
print(a)

a= N(sqrt(2)*pi)
print(a)

a=(sqrt(2)*pi).evalf()
print(a)

x= symbols('x')
W= Integral( 1/sqrt(x),x)
print(W)