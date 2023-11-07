#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------
import os, sys
import hashlib



val = hashlib.md5(open('md5.txt','rb').read()).hexdigest()
print("md5 val=", val )
