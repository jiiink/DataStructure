
import sympy as sym

# 요게 중요. x는 변수가 아니고 symbol, 기호
x = sym.Symbol('x')
y = sym.Symbol('y')


fxy = sym.log(x + y + 100 + x * y )
gxy = (x + y) ** 2 -x + 3*y - 1
hxy = 3**x - 2**y + 10

gxh = gxy*hxy

print(f'fxy= {fxy}')
print(f'gxy= {gxy}')
print(f' gxh ={gxh}')

print(f'풀린 형태 = {gxh.expand()}')
print(out1**3/out1)

#>>> type(x)
#<class 'sympy.core.symbol.Symbol'>