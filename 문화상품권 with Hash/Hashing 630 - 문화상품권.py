#--------------------------------------------------------
# Author:      Zoh Que
# Created:     05-12-2023
#--------------------------------------------------------

# 문화상품권 번호 생성하기 만들기

import hashlib

def str_to_int( mystring, M ) :
    if M < 100 :
        exit("Error! Too small M")
        return
    wbytes = mystring.encode('utf-8')     # hashlib( )에는 byte code로 들어가야 함.
    myobj = hashlib.sha256( wbytes )
    myhex = myobj.hexdigest()
    myint = int(myhex, 16)% M
    return( myint )

Code = "3456 4567 8978"

proof = str_to_int( Code, 10000 )

Final = Code + " " + str(proof)
print(f" {Code=}, {Final=}")

Lcode=["1234 5678 9000", "4362 1111 2222", "8767 5609 5648",
       "1134 5678 9000", "3362 1111 2222", "7767 5609 5648"]



for w in Lcode :
    proof = str_to_int( w, 10000 )
    Final = w + " " + str(proof).zfill(4)
    print(f" {w=}, {Final=}")