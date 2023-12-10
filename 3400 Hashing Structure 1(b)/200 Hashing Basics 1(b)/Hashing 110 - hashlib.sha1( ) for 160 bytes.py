
import hashlib



for w in "Busan Galmegi Busan Busan Kukbab".split() :
    m = hashlib.sha1() # 160 bits로
    ts = w.encode('utf-8')
    m.update( ts )
    mhex = m.hexdigest()
    print(f'{ts}= { mhex }, len={len(mhex)}, hex')

print("\n Another Work \n")
for w in "Summer Time Killer Summer Week".split() :
    m = hashlib.sha1() # 160 bits로
    ts = w.encode('utf-8')
    m.update( ts )
    mhex = m.hexdigest()
    print(f'{ts}= { mhex }, len={len(mhex)}, hex')