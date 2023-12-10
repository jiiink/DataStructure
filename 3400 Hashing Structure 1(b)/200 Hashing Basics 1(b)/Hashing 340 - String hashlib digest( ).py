#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-08
#-------------------------------------------------------------------------------

import hashlib
m = hashlib.sha256()

print( m.digest_size )
print( m.block_size  )

for w in list("Summer Time") :
    ts = w.encode('utf-8')
    m.update( ts )
    mhex = m.hexdigest()
    mint = int(mhex, 16)
    print(f'{w}= {mhex} {mint%100000}')