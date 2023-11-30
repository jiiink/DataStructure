#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2020-05-02
#-------------------------------------------------------------------------------

import collections

lst = ['aa', 'cc', 'dd', 'aa', 'bb', 'ee']
print("> out1", collections.Counter(lst))



print( collections.Counter({'가': 3, '나': 2, '다': 4}))

c = collections.Counter(a=2, b=3, c=2)#['a','a','a', 'b'
print("> out3", collections.Counter(c))
print("> out4", sorted(c.elements()))

