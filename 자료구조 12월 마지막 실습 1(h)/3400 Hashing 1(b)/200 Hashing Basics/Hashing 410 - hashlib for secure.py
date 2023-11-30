#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-08
#-------------------------------------------------------------------------------

import hashlib
m = hashlib.sha256()
x = m.update(b"Nobody inspects")
x = m.update(b" the spammish repetition")
m.digest()

print(f'm.digest_size= {m.digest_size}')
print(f'm.block_size = {m.block_size}')

x=hashlib.sha256(b"Nobody inspects the spammish repetition").hexdigest()
print(f'x={x}')