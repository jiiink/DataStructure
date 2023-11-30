
from operator import add, sub, mul, pow

a = [ 1,  2,  3]
b = [20, 30, 40]
c = list(map(sum, list(zip(a,b))))
print(c)


k = list(map(add, a, b))
print("mad add=",k)

k = list(map(pow, b, a))
print("power=", k)