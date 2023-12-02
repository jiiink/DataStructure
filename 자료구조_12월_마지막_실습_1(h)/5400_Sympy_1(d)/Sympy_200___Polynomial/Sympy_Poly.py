from sympy import Poly, symbols, Domain

x, y, a, b = symbols('x, y, a, b')

R = Poly(x**5 + a*x**2 - b*x + 4, x)
print( R.coeffs() )
print( R.all_coeffs())


p = Poly(x**2 + y)

print(p )

#Poly(x**2 + y, x, y, domain='ZZ')

print(p.domain)
print(isinstance(p.domain, Domain))

#Poly(x**2 + y/2)
#Poly(x**2 + 1/2*y, x, y, domain='QQ')
