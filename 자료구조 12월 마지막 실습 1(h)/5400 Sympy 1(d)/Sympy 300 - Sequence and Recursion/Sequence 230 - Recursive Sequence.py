from sympy import *
from sympy.series.sequences import RecursiveSeq

n = symbols("n", integer=True)
y = Function("y")
r, q = symbols("r, q")

# note the initial term '2' could also be symbolic
arith = RecursiveSeq( y(n-1) + r, y(n), n, [5])
geo   = RecursiveSeq( y(n-1)*q, y(n), n, [6])

# calculate a few terms

print(f" arith[:6] = { arith[:5] }" ) # [2, r + 2, 2*r + 2, 3*r + 2, 4*r + 2]
print(f" geo[:6]= {geo[:6]}" ) # [2*q**3, 2*q**4]

# to use with rsolve you'll need to unpack the RecursiveSeq into ordinary sympy expressions:
Out = rsolve(geo.recurrence.rhs - geo.recurrence.lhs, geo.recurrence.lhs, [geo[0]])  # 2*q**n

print( f"Out= {Out}")