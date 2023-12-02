#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2020-05-02
#-------------------------------------------------------------------------------

# 예제1 - sorted()를 이용한 정렬된 OrderedDict 만들기

from collections import OrderedDict

# 기본 딕셔너리
d = {'banana': 3, 'apple': 4, 'pear': 1, 'orange':2}

# 키(key)를 기준으로 정렬한 OrderedDict
ordered_d1 = OrderedDict(sorted(d.items(), key=lambda t:t[0]))
print(ordered_d1)
'''
결과
OrderedDict([('apple', 4), ('banana', 3), ('orange', 2), ('pear', 1)])
'''

# 값(value)를 기준으로 정렬한 OrderedDict
ordered_d2 = OrderedDict(sorted(d.items(), key=lambda t:t[1]))
print(ordered_d2)
'''
결과
OrderedDict([('pear', 1), ('orange', 2), ('banana', 3), ('apple', 4)])
'''

# 키(key)의 길이(len)를 기준으로 정렬한 OrderedDict
ordered_d3 = OrderedDict(sorted(d.items(), key=lambda t:len(t[0])))
print(ordered_d3)
'''
결과
OrderedDict([('pear', 1), ('apple', 4), ('orange', 2), ('banana', 3)])
'''

# ordered_d1에 새로운 아이템 추가
ordered_d1.update({'grape': 5}) # d1['grape']=6
ordered_d1['jamong']= 100
ordered_d1['tomato']= -5
print(ordered_d1)

'''
결과
OrderedDict([('apple', 4), ('banana', 3), ('orange', 2), ('pear', 1), ('grape', 5)])
'''


# 출처: https://excelsior-cjh.tistory.com/98?category=966334 [EXCELSIOR]