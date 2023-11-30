#-------------------------------------------------------------------------------
# Purpose:     2020 컴퓨터및 프로그래밍 입문
# Author:      Cho
# Created:     2020-05-14
#-------------------------------------------------------------------------------

from collections import OrderedDict


my_dict = {'kiwi': 4, 'apple': 5, 'cat': 3}
ordered_dict = OrderedDict() # creating empty ordered dict
print("> Empty 0 ", ordered_dict)

ordered_dict = OrderedDict(my_dict)
print("> After 1 ", ordered_dict)

# Adding, Replacing, Removing items from OrderedDict

ordered_dict['dog'] = 3
ordered_dict['kiwi'] = 10
print("> After 2 ", ordered_dict)

# removing and adding a value
ordered_dict.pop('kiwi')
print("> Popped 3 ", ordered_dict)
ordered_dict['kiwi'] = 4
print("> Updated 4 ", ordered_dict)


# moving apple to end and dog to start
ordered_dict.move_to_end('apple')
ordered_dict.move_to_end('dog', False)
print("> Moved 5 ", ordered_dict)

# pop item
item = ordered_dict.popitem(True)
print("> Poped item= ", item)
print("> After popped= ",ordered_dict)


