from functools import reduce

La = [ 2, 3, 4, 5, 6]

prod_a = reduce( lambda x,y,:x*y, La)  #  하나의 값으로 reduce

# 모든 숫자를 곱합.
print(prod_a)