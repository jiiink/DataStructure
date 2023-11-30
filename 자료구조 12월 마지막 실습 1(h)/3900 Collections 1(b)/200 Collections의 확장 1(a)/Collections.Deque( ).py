#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2021-04-15
#-------------------------------------------------------------------------------

from collections import deque

d = deque('ghi')                 # make a new deque with three items
for elem in d:                   # iterate over the deque's elements
  print(elem.upper())


d.append('j')                    # add a new entry to the right side
d.appendleft('f')                # add a new entry to the left side
print( d )
                               # show the representation of the deque
deque(['f', 'g', 'h', 'i', 'j'])
d.pop()                          # return and remove the rightmost item
print( d )
d.popleft()
print( d )                      # return and remove the leftmost item

list(d)                          # list the contents of the deque
print( d [0] )                        # peek at leftmost item
print( d [-1] )                              # peek at rightmost item


list(reversed(d))                # list the contents of a deque in reverse

print('h' in d )                        # search the deque

d.extend('jkl')                  # add multiple elements at once

deque(['g', 'h', 'i', 'j', 'k', 'l'])
d.rotate(1)                      # right rotation
print( d )
d.rotate(-3)                     # left rotation
print( d )
deque(['g', 'h', 'i', 'j', 'k', 'l'])

deque(reversed(d))               # make a new deque in reverse order
deque(['l', 'k', 'j', 'i', 'h', 'g'])
d.clear()                        # empty the deque
#d.pop()                          # cannot pop from an empty deque

d.extendleft('abc')              # extendleft() reverses the input order
print( d )
deque(['c', 'b', 'a'])
print( d )