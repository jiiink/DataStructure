#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2020-05-02
#-------------------------------------------------------------------------------

import collections

my = collections.Counter()
my.update("Banana")
print( my )
my.update("토마토")
print( my )


for k,v in my.items():
    print( f'{k:3} : {v}')


