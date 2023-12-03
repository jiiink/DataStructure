

from operator import *
from functools import reduce

sqr = lambda x : x*x

print(list(map(add, [1,2,3,4], [100,200,300,400])))

print(list(map(sub, [1,2,3,4], [100,200,300,400])))

print(list(map(div, [100,200,300,400], [5, 6, 7, 8])))

print(list(map( mul, [1,2,3,4], [100,200,300,400])))

print(reduce(add, [1,2,3,4]))

print([x for x in [1,2,3,4,32,21, -5, 20, 99] if not(x%2)])