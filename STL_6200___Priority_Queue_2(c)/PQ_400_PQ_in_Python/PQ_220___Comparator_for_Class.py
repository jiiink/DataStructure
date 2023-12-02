#-------------------------------------------------------------------------------
# Purpose:     Zoh's Work     "過猶不及"
#-------------------------------------------------------------------------------
class node:
  nodes = dict()
  def __init__(self, label, priority):
    self.label = label
    self.priority = priority

  def __lt__(self, other):
    if ( other.label ==  self.label ) :
        return other.priority < self.priority
    else :
       return  other.label > self.label

import heapq
import random
heap = []


for w in range(20) :
    char = random.choice(list("abcdefgh"))
    num  = random.choice([1,2,3,4,5,6,7,8])
    nodew = node(char, num)
    heapq.heappush(heap, nodew )


# Should print 'a', 'b', 'c' in that order.
i=1
while( heap ):
    print(f"i={i:3}:  {heap[0].label} {heap[0].priority}" )
    heapq.heappop(heap)
    i+= 1