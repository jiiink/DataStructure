#-------------------------------------------------------------------------------
# Purpose:     2020 컴퓨터및 프로그래밍 입문
# Author:      Cho
# Created:     2020-05-14
#-------------------------------------------------------------------------------

from collections import OrderedDict


mydic = {'kiwi': 4, 'apple': 5, 'cat': 3, 'Beer':10, 'Soju':12}
O_dict = OrderedDict( mydic ) # creating empty ordered dict


# reversed iteration
for item in reversed( O_dict):
    print(">  ", item)

print("\n\n Comparison")
d1 = {'a': 'A', 'b': 'B'}
d2 = {'b': 'B', 'a': 'A'}

od1 = OrderedDict({'a': 'A', 'b': 'B'})
od2 = OrderedDict({'b': 'B', 'a': 'A'})

print(d1 == d2)
print(od1 == od2)
print(d1 == od1)


