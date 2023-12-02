"""
There are several printers available in SymPy. Following is a partial list −

str
srepr
ASCII pretty printer
Unicode pretty printer
LaTeX
MathML
Dot
SymPy objects can also be sent as output to code of various languages,
such as C, Fortran, Javascript, Theano, and Python.

SymPy uses Unicode characters to render output in form of pretty print.
If you are using Python console for executing SymPy session,
the best pretty printing environment is activated by calling init_session() function.

"""

from sympy import init_session
init_session()
IPython console for SymPy 1.5.1 (Python 3.7.4-64-bit) (ground types: python).

These commands were executed −

>>> from __future__ import division
>>> from sympy import *
>>> x, y, z, t = symbols('x y z t')
>>> k, m, n = symbols('k m n', integer=True)
>>> f, g, h = symbols('f g h', cls=Function)
>>> init_printing()
Documentation can be found at https://docs.sympy.org/1.5.1/.

>>> Integral(sqrt(1/x),x)
