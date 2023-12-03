
from functools import reduce
a= reduce( (lambda x, y: x * y), [1, 2, 3, 4] )
print("실험 01=", a)

b= reduce( (lambda x, y: x / y), [1.0, 2, 3, 4] )
print("실험 02=",b)
