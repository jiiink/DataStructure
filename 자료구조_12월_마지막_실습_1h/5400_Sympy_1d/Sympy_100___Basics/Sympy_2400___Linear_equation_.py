#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-02
#-------------------------------------------------------------------------------


from sympy import *


x, y, z = symbols('x, y, z')

# x-y=4
# x+y=1


sol = linsolve([Eq(x-y,4),Eq( x + y ,1) ], (x, y))
print( sol )

# linsolve()은 행렬형식으로 주어진 것도 풀 수 있다.

Ma=Matrix([[1,-1],[1,1]])
Mb=Matrix([4,1])
sol = linsolve([Ma,Mb], (x,y))
print( sol )


Ma=Matrix([[1,2,3],[4,5,6], [7,8,10]])
Mb=Matrix([3, 6, 9])
sol = linsolve((Ma,Mb), (x,y,z))
print( sol )