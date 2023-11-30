from sympy import expand, symbols, factor

# 한번에 symbolic 변수 만들기
x, y, z = symbols('x y z')
exp1 = x + 2*y + z

exp = expand( exp1**2 + exp1 )
print(f"exp= {exp}")

# sympy.factor() 인수분해
fact = factor(exp)
print(f"fact1= {fact}")


fact = factor(x*x + x -1 )
print(f"fact2= {fact}")

fact = factor(x*x -2*x +1 )
print(f"fact3= {fact}")
