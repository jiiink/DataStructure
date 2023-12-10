#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

import uuid
import hashlib

for w in range(1,11):
    salt = uuid.uuid4().hex
    print( " %2d salt= %s"% (w, salt) )



