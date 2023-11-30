# https://docs.sympy.org/latest/modules/polys/reference.html

from sympy import degree, degree_list
from sympy.abc import x, y


print("x의 차수= ", degree(x**2 + y*x + 1, gen=x))
print("y의 차수= ", degree(x**2 + y*x + 1, gen=y))
print("degree(0, x)= ", degree(0, x))



'''
 sympy.polys.polytools.degree_list(f, *gens, **args)
 Return a list of degrees of f in all variables.

 sympy.polys.polytools.LC(f, *gens, **args)
 Return the leading coefficient of f.
'''

dl = degree_list(x**6 - x**2 + y*x + 3*y**(x-1) - 1)
for w in dl :
    print(w)


a = Poly(x**3 + a*x**2 - b, x)
print( a.coeffs() )
print( a.all_coeffs())

