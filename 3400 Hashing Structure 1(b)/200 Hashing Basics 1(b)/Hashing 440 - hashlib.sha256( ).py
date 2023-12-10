#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-08
#-------------------------------------------------------------------------------

import hashlib

L=["banana", "부산대", "돌", "돌", "돌아이" ]

for w in L :
    m = hashlib.sha256()
    m.update( w.encode('utf-8'))
    print(f'm.hexdigest({w})= \n {m.hexdigest()}')