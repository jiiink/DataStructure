#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import queue as Q

q = Q.PriorityQueue()
q.put(10)
q.put(81)
q.put(72)
q.put(17)
q.put(31)
q.put(54)

while not q.empty():
    item = q.get() # return 시키고 pop( )
    print( f'item= {item}' )
