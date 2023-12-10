#-------------------------------------------------------------------------------
# Purpose:     2020 컴퓨터및 프로그래밍 입문
# Author:      Cho
# Created:     2020-05-08
#-------------------------------------------------------------------------------

import collections


d={}

d['a'] = 100
d['b'] = 223
d['ㅋㅋㅋ'] = 543

key = "good"
default_value = "잘 모름. 입력이 준비가 안됨"
d[key] = d.get(key, default_value)



d.get("bogus", default_value) # 없는 값을 찾을
#d["bogus"]  이렇게하면 오류가 발생함.

print(d)
