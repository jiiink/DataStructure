#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import hashlib

def hash5(w):
    hint = int(hashlib.md5( w.encode('utf-8')).hexdigest(), 16)  # 정수로
    hint = hint // 1000
    return( hint % 10000)


Slist= [ "A", "ggod", "boy", "boys", "Aa"]

for w in Slist :
    print(w, "= ", hash5(w))