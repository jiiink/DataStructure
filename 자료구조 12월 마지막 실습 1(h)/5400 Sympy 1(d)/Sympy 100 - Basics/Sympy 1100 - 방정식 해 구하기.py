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
z = sym.Symbol('z')

# 대수 방정식의 해를 구할 수 있다. using solveset():

d1 = sym.solveset(x ** 4 - 1, x)

# As you can see it takes as first argument an expression that is
# supposed to be equaled to 0. It also has (limited)
# support for transcendental equations:

d2 = sym.solveset(sym.exp(x) + 1, x)

# 선형 시스템도 해결이 가능하다. 이건 아주 중요!!!
# Sympy is able to solve a large part of polynomial equations, and is also capable of solving multiple equations with respect to multiple variables giving a tuple as second argument. To do this you use the solve() command:

solution = sym.solve((x + 5 * y - 2, -3 * x + 6 * y - 15), (x, y))
print( f'1. solution[x], solution[y]= {solution[x], solution[y]} ' )

solution = sym.solve((x + 5 * y +z - 2, -3 * x + 3*z - 2 * y - 15, x + y - z -6 ), (x, y, z))
print( f'2. solution[x,y,z]= {solution[x], solution[y], solution[z]} ' )

# 다른 방법은 factor.
# factor returns the polynomial factorized into irreducible terms,
# and is capable of computing the factorization over various domains:

f = x ** 4 - 3 * x ** 2 + 1
print(f'sym.factor(f) = {sym.factor(f)}')
print(f'sym.factor(f, modulus=5) = {sym.factor(f, modulus=5)}')

# Solve boolean equations, that is, to decide if a
# certain boolean expression is satisfiable or not.
# For this, we use the function satisfiable:

print(f'sym.satisfiable(x & y)={sym.satisfiable(x & y)}')

#(x & y) 를 만족시키는 해가 존재하는 지의 여부를 계산
#

print( f'sym.satisfiable(x & ~x)={sym.satisfiable(x & ~x)}')

for (i,w) in enumerate([d1, d2]) :
    print(i+1, ": ",  w)