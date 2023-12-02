#-------------------------------------------------------------------------------
# Purpose:     2022 Zoh's Work     "過猶不及" 메롱..
# Author:      Cho
# Created:     2022-05-27
#-------------------------------------------------------------------------------

from sympy import summation, oo, symbols, log, factor
i, n, m = symbols( 'i n m', integer=True)
out = summation(2*i - 1, (i, 1, n))
print(out)

out = summation(i**2, (i, 1, n))
print(out)
print(out.factor())


out = summation(1/2**i, (i, 0, oo)) # 무한긊,ㅡ
print(out)
out = summation(1/log(n)**n, (n, 2, oo))
print(out)

out = summation(1/n**2, (n, 2, oo))
print(out)


"""
___
\ ‘
\ -n
/ log (n)
/__,
n = 2
>>> summation(i, (i, 0, n), (n, 0, m))
3 2
m m m
-- + -- + -
6 2 3
>>> from sympy.abc import x
>>> from sympy import factorial
>>> summation(x**n/factorial(n), (n, 0, oo))
x
e
2.4.5
"""