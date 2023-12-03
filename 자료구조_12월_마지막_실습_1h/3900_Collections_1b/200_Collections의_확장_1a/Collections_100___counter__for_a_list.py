#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2021-01-02
#-------------------------------------------------------------------------------

from collections import Counter
string  = "aaaaabbbbcccdde"
my_counter = Counter( string )
print(my_counter)

print(my_counter.items())
print(my_counter.keys())
print(my_counter.values())

my_list = [0, 1, 0, 1, 2, 1, 1, 3, 2, 3, 2, 4]
my_counter = Counter(my_list)
print(f"> my_counter= {my_counter}")
# 많이 나타난 순서대로 정렬된다

# most common items
print(f"> most common= {my_counter.most_common(1)}" )

# Return an iterator over elements repeating each as many times as its count.
# Elements are returned in arbitrary order.
# mycounter와 같은 구성의 정렬된 list를 만들어 준다.
Nlist = list(my_counter.elements())
print(f"> Nlist= {Nlist}")


