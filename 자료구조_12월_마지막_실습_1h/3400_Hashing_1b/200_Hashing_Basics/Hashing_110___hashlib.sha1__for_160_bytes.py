#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-08
#-------------------------------------------------------------------------------

import hashlib



for w in list("Summer Time") :
    m = hashlib.sha1() # 160 bits로
    ts = w.encode('utf-8')
    m.update( ts )
    mhex = m.hexdigest()
    print(f'{ts}= { mhex }, len={len(mhex)}, hex')

for w in "Summer Time Killer Summer Week".split() :
    m = hashlib.sha1() # 160 bits로
    ts = w.encode('utf-8')
    m.update( ts )
    mhex = m.hexdigest()
    print(f'{ts}= { mhex }, len={len(mhex)}, hex')