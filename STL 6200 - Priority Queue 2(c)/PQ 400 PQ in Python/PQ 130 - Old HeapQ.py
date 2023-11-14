#-------------------------------------------------------------------------------
# Author:      Cho
#-------------------------------------------------------------------------------

# 옛날식  heap
import heapq

heap = []
heapq.heappush(heap, (1, 'one'))

heapq.heappush(heap, (10, 'ten'))
heapq.heappush(heap, (5, 'five'))
heapq.heappush(heap, (6, 'six'))
heapq.heappush(heap, (3, 'three'))
heapq.heappush(heap, (7,'seven'))

print(" 1. heap[]=", heap)

print("\n 하나를 제거합니데이\n")
heapq.heappop(heap)

print(" 2. heap[]=", heap)

# the smallest
print ("the smallest=", heap[0] )

heapq.heappop(heap)  # pop( )
heapq.heappop(heap)  # pop( )
print ("the smallest 2 =", heap[0] )
