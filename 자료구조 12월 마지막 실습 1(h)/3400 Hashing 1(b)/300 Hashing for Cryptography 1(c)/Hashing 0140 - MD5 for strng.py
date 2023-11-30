#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import hashlib

mystr="Happy Time"
hw = hashlib.md5( mystr.encode('utf-8')).hexdigest()
#print(hashlib.algorithms_available)
#print(hashlib.algorithms_guaranteed)



print( mystr, "\n   MD5 value=", hw)

mystr="Happy Time1"
hw = hashlib.md5( mystr.encode('utf-8')).hexdigest()
print( mystr, "\n   MD5 value=", hw)

munhwa="a345fgk9"
hw = hashlib.md5( munhwa.encode('utf-8')).hexdigest()
print( munhwa, "\n   MD5 value=", hw[-8:])