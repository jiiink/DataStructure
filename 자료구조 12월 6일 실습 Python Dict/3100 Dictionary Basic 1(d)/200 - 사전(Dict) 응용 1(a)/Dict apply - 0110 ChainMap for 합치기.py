#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-04-14
#-------------------------------------------------------------------------------

from collections import ChainMap
print( ChainMap() )

# ChainMap() # 아무것도 넣지 않으면 빈 채로 반환

default = {'db':'127.0.0.1', 'port':3306}
custom  = {'db':'ash84.net', 'port':3308, 'lib':'pymysql', "Beer":"맥주당"}
Combined = ChainMap(default, custom)

print("Combined=", Combined )


for k, v in Combined.items():
    print(f'key= {k:7}, value= {v:15}')

# 조회는 키가 발견될때 까지 연속적으로 찾는다.
# 반대로 쓰기, 업데이트, 삭제는 오직 첫번째 mappings 에서만 이루어진다.
