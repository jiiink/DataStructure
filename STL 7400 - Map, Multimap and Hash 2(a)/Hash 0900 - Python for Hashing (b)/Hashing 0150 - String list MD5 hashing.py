#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import hashlib

L = ["한글", "사랑", "개다리", "Teran", "부산대학교", "만세"]

for w in L :
    hashw = hashlib.md5( w.encode('utf-8')).hexdigest() # 16진수로
    hint = int(hashlib.md5( w.encode('utf-8')).hexdigest(), 16)  # 정수로

    print("hash(", w,")= ", hashw )
    print("     ", w,")= ", hint )


