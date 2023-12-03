#-------------------------------------------------------------------------------
# Name:        module1
# Author:      algor
#-------------------------------------------------------------------------------


# https://studymake.tistory.com/348
#

from sympy import *

init_printing() # 수식을 LaTex 스타일로 표시한다. ipython에서만 동작함.
init_printing(forecolor='Red')  # 글자 색상 지정

#init_session()  # 끝때는 exit()

a= sqrt(2)*pi
print(a)

a= N(sqrt(2)*pi)
pprint(a)

a=(sqrt(2)*pi).evalf()
pprint(a)

x= symbols('x')
W= Integral( 1/sqrt(x),x)
pprint(W)   #pprint( ), 예쁘게 출력을 도와 줌.,