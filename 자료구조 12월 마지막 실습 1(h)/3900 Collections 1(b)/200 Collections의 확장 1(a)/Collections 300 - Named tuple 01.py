#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2021-01-02
#-------------------------------------------------------------------------------



from collections import namedtuple
# create a namedtuple with its class name as string and its fields as string
# fields have to be separated by comma or space in the given string

Point = namedtuple('Point','x, y')
pt = Point(1, -4)
print(pt)
print(pt._fields)
print(type(pt))
print(pt.x, pt.y)

Person = namedtuple('Person','name, age')
friend = Person(name='Tom', age=25)
print(friend.name, friend.age)

