#-------------------------------------------------------------------------------
# Purpose:     2022 Zoh's Work     "過猶不及" 메롱..
# Author:      Cho
# Created:     2022-03-10
#-------------------------------------------------------------------------------


La=[ '45', '61', '-23', '9', '-20']

Lb = list( map(int, La)) #Python 3에서는 다시 list로 바꿔야 함.
print(Lb)

# List Comprehension을 사용하는 방법
Lc = [int(i) for i in La]