#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2021-04-15
#-------------------------------------------------------------------------------


from collections import Counter


L = list("computer science communications")


Ldict = Counter(L)
items = Ldict.items()

print(items)

for i in items:
    print(f"'{i[0]}' appears {i[1]} times")