#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import hashlib


def hash5(w):
    w = str(w)  # 반드시 문자로 바꾸어야만 한다.
    hint = int( hashlib.md5( w.encode('utf-8')).hexdigest(), 16)  # 정수로
    hint = hint // 1000
    return( hint % 10000)


L = [ 7, 8, 9, 10, 11, 83445, 4556, 16677, 72, 90, 7178]

for w in L :
    print("hash(", w, ")= ", hash5(w))