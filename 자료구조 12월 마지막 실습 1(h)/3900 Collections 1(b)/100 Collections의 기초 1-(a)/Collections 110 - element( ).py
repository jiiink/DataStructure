#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2020-05-02
#-------------------------------------------------------------------------------

from collections import Counter


Cp = Counter( a=4, b=2, c=5)
print( " Cp = ", Cp )

print( " type = ",   type(Cp.elements()) )
print( " list = ",   list(Cp.elements()) )

for i,w in enumerate( Cp.elements()) :
    print( f'{i:2} {w}')