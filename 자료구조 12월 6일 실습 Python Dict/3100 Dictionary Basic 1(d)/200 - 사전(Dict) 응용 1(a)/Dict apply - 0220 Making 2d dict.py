
import random

Square={}
n =5
for u in range(n):
    for v in range(n):
        x=(u,v)
        Square[x]=0



print("Square[(3,2)]=", Square[(3,2)])

for w in range(50):
    u = random.randrange(n)
    v = random.randrange(n)
    x= (u,v)
    print("무작위 점 = ", x)
    Square[x] += 1


print("모든 점을 출력함")

for w in list(Square.keys()):
    print("Square[", w, "]=", Square[w])