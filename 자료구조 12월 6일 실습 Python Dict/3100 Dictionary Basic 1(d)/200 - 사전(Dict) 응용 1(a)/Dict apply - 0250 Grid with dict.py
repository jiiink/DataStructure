
Square={}
n =5
for x in range(n):
    for y in range(n):
        point=(x,y)
        Square[point]= 10*x + y


print(Square[(3,2)])
print(Square[(1,4)])
print(Square[(2,3)])