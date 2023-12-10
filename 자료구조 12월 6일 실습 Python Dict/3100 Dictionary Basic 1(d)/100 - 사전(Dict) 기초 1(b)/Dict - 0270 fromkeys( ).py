#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-04-14
#-------------------------------------------------------------------------------

arr = [6, 5, 6, 4, 4, 1, 1, 2, 3, 9, 8, 7, 9, 8, 7]

result1 = dict.fromkeys(arr)    # 리스트 값들을 key 로 변경
print(result1)

result2 = list(result1)         # list(dict.fromkeys(arr))
print(result2)
