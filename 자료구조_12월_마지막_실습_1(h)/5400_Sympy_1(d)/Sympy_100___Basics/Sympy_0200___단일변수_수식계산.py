
import sympy as sym

# 요게 중요. x는 변수가 아니고 symbol, 기호
x = sym.Symbol('x')
y = sym.Symbol('y')


out1 = x + y - x + y
out2 = (x + y) ** 2 -x + 3*y - 1
out3 = 2*x - 2*y

print(f'out1={out1}')
print(f'out2={out2}')
print(f'out1*out2={out1*out2}')
print(f'out1*out3={out1*out3}')
print(f'풀린 형태 = {out2.expand()}')
print(out1**3/out1)

#>>> type(x)
#<class 'sympy.core.symbol.Symbol'>