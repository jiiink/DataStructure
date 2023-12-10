# zip을 이용하여 list difference를 만들기

import numpy as np

ini_list = [5, 4, 89, 12, 32, 45]
print("intial_list", str(ini_list))


print(f"1. 가장 기본적인 방법 ")
diff_list = []
for i in range(1, len(ini_list)):
    diff_list.append(ini_list[i] - ini_list[i-1])
print ("> 1. difference list: ", str(diff_list))

print(f"2. zip( )을 이용하기 ")
diff_list = []
for x, y in zip(ini_list[0::], ini_list[1::]):
    diff_list.append(y-x)
print ("> 2. difference list: ", str(diff_list))

print(f"3. numpy.diff( )를 이용하기 ")

ini_list = np.array([5, 4, 89, 12, 32, 45])
diff_list = np.diff(ini_list)
print ("> 3. difference list: ", str(diff_list))
