

items = [1, 2, 3, 4, 5]
sq = []
for x in items:
	sq.append(x ** 2)


print("일반적인 방법", sq)

def sqr(x): return x ** 2

ohmygod = list(map(sqr, items))
print("오 마이 갓!", ohmygod)

crazy = list(map((lambda x: x **2), items))
print("절대고수의 방법", crazy)



