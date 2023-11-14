#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

from queue import PriorityQueue
que = PriorityQueue()
que = PriorityQueue(maxsize=8)

que.put(4)
que.put(1)
que.put(7)
que.put(3)

print(que.get())  # 1
print(que.get())  # 3
print(que.get())  # 4
print(que.get())  # 7

# 만약 단순 오름차순이 아닌 다른 기준으로 원소가 정렬되기를 원한다면,
# (우선순위, 값)의 튜플의 형태로 데이터를 추가하고 제거하면 된다.

#       (우선순위, 값)
que.put((23, 'Apple'))
que.put((15, 'Banana'))
que.put((57, 'Cherry'))
que.put((13, 'Soju'))
que.put(( 7, '다람쥐'))

print(que.get()[1])  # Banana
print(que.get()[1])  # Cherry
print(que.get()[1])  # Apple