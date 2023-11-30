import sympy
from sympy import factor_list

x = sympy.symbols('x')
r = sympy.factor((x**7 - 1)*(x*x - 3*x +2))
print(r)

f_list = factor_list(r) # 각 곱해진 다항식을 list 형태로 쪼개준다.

print("factor list 출력하기 ")
for i,w in enumerate(f_list[1]) :
    print(f"i={i}, {w}")

print(f_list)
# (1, [(x - 1, 1), (x**6 + x**5 + x**4 + x**3 + x**2 + x + 1, 1)])

s = f_list[1][1][0] # factor의 첫 원소의 함수 자체
print(f"f_list[1][1][0]= {s}")
print(type(s))

res= s.evalf(subs={x:1})
print(f"s.evalf(subs=x:1) = { res}")    # 7.00000000000000