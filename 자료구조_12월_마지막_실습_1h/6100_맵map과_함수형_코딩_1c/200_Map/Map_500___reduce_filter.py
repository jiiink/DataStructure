from functools import reduce

# lambda 인자1,인자2, … : 표현식

f1 = lambda x,y: x + y
f2 = lambda x: x**2

print(f1(10,20))
print(list(map( f2, list(range(10)))))


sum = reduce(lambda x, y: x + y, [0, 1, 2, 3, 4])
print("sum = ", sum)

f3 = lambda x, y: y + x
print(f3('abcde',"x"))

str = reduce(lambda x, y: y + x, 'abcde')
print("str=", str)


lx = [x for x in range(10) if x < 5]
print("Filtered lx =", lx)

ly = [x for x in range(10) if x % 2]
print("Filtered ly =", ly)