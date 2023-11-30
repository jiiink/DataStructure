
from functools import reduce

L = ['Testing ', 'shows ', 'the ', 'presence', ', '+'not ', 'the ', 'absence ', 'of ', 'bugs']
la = reduce( (lambda x,y:x+y), L)

print(la)
