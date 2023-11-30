#-------------------------------------------------------------------------------
# Purpose:     2020 Prof. Zoh's Work
# Author:      Cho
# Created:     2020-08-10
#-------------------------------------------------------------------------------

from sympy import *
init_printing()

# Rational( 분자, 분모 ) 함수는 유리수를 분수로 나타낸다.



for w in range(1,11):
    for q in range(1,11) :
        print( f'Rational({w},{q})={Rational(w,q)}' )

# 원주율은 pi 로 표기한다.
print( pi )
print( f'원주율 = {N(pi)}' )

