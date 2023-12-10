#-------------------------------------------------------------------------------
# Purpose:     2020 컴퓨터및 프로그래밍 입문
# Author:      Cho
# Created:     2020-05-08
#-------------------------------------------------------------------------------

import collections

# declaring default dict
defd = collections.defaultdict(lambda : 'Key Not found')


defd['a'] = 1
defd['b'] = 2

print ("The value associated with 'a' is : ")
print (defd['a'])


print ("The value associated with 'c' is : ")
print ("What=", defd['c'])

