

import hashlib

m= hashlib.sha256( )
print(f"{m.digest_size=}" )
print(f"{m.block_size=}"  )


def str_to_int( mystring, M ) :
    if M < 100 :
        exit("Error! Too small M")
        return
    wbytes = mystring.encode('utf-8')     # hashlib( )에는 byte code로 들어가야 함.
    myobj = hashlib.sha256( wbytes )
    myhex = myobj.hexdigest()
    myint = int(myhex, 16)% M
    return( myint )

M = 100000
for w in list("Summer Time") :
    hval = str_to_int( w, M )
    print(f" {w=}, {hval=:6}")