#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import hashlib


# SHA에서는 입력 스트링은 byte로 바꿔야 한다.

mystr= b"Happy"


print(hashlib.algorithms_available)
print(hashlib.algorithms_guaranteed)

for w in range(5):
    mystr= b"Happy"
    mystr += str(w).encode()
    hash_object = hashlib.sha256( mystr )
    hex_dig = hash_object.hexdigest()
    print( "hash( %-10s )= %s" %(mystr,hex_dig) )


for w in ["메롱", "찌롱", "쎼롱", "삐롱"] :
    hash_object = hashlib.sha256( w.encode('utf-8'))
    hex_dig = hash_object.hexdigest()
    print( f"hash( {w} ) = {hex_dig}" )

