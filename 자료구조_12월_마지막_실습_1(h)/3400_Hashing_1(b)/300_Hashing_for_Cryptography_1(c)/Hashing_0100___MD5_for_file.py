#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------
import os, sys
import hashlib


def md5(fname):
    hash_md5 = hashlib.md5()
    with open(fname, "rb") as f:
        for chunk in iter(lambda: f.read(4096), b""):
            hash_md5.update(chunk)
    return hash_md5.hexdigest()



val = md5( "md5.txt" )
print("md5 val=", val )
val = md5( "md6.txt" )
print("md6 val=", val )
val = md5( "md7.txt" )
print("md7 val=", val )

val = hashlib.md5(open('md5.txt','rb').read()).hexdigest()
print("md5 val=", val )
