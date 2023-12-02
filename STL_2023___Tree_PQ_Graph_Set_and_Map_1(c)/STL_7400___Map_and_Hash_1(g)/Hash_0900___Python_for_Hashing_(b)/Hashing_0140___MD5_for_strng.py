#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import hashlib

mystr="Happy Time"
hw = hashlib.md5( mystr.encode('utf-8')).hexdigest()
print(hashlib.algorithms_available)
print(hashlib.algorithms_guaranteed)



print( mystr, "   MD5 value=", hw)