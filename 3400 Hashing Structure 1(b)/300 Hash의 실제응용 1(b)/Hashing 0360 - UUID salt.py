
"""
UUID란?
UUID(Universally Unique IDentifier)는 네트워크상에서 고유성을 보장하는
ID를 만들기 위한 표준 규약이다. UUID는 다음과 같이 32개의 16진수로 구성되며
5개의 그룹으로 표시되고 각 그룹은 붙임표(-)로 구분한다.

280a8a4d-a27f-4d01-b031-2a003cc4c039

적어도 서기 3400년까지는 같은 UUID가 생성될 수 없다고 한다.
이러한 이유로 UUID를 데이터베이스의 프라이머리 키(primary key)로 종종 사용한다.
"""

import uuid
import hashlib

for w in range(1,11):
    salt = uuid.uuid4().hex
    print( " %2d salt= %s"% (w, salt) )



