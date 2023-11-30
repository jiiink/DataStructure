
"""
most frequently used: expand and simplify.
"""
import sympy as sym

x = sym.Symbol('x')


# SymPy has support for indefinite and definite integration
# of transcendental elementary and special functions via integrate() facility,
# 사용된 방법은 Risch-Norman algorithm이다

f = (x + sym.sin(x))/(1+ sym.cos(x))
intf = sym.integrate( f, x)
print(f"intf= {intf}")

fval = sym.integrate( f,(x, 0, sym.pi / 2))
print(f"fval= {fval}")
