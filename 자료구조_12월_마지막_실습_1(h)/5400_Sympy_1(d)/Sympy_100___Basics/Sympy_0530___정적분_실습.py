from sympy import *
x = Symbol('x')
f = x**2 + x + 1
out1 = Integral(f, x).doit()
print(out1)


out2=  Integral(f, (x, 0, 5)).doit()
print(out2)



out3 = integrate(f,x)
print(out3)


out4 = integrate( out3,x)
print(out4)


out5 = integrate( out4,(x,-1,1))
print(out5)
print(N(out5))