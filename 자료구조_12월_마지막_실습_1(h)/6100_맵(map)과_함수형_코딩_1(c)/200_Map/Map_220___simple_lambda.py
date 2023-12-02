
def addone(x) :
    return x+1

# lambda 인자1,인자2, … : 표현식

f1 = lambda x,y: x + y
f2 = lambda x: x**2

print(f1(10,20))
print(list(map( f2, list(range(10)))))


la =  [x ** 2 for x in range(5)]             # 파이썬 2

print(la)

print(list(map( f1, [1,2,3,4], [100,200,300,400])))


