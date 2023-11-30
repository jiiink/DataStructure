
La = [ 4, 5, 11, 3, 9, 8, 2, 6, 10]
Fa = filter( lambda x : x%2 ==0 , La)  # La에서 짝수만  나와라...

# 이 결과 Lb는 filter object이다. 특수한

Lb = list( Fa)
print( Lb )

Ld =[ w for w in La if w%2 == 0]
print( Ld )