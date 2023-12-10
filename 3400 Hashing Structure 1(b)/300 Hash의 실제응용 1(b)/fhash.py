#-------------------------------------------------------------------------------
#
#  run > python fhash.py  md5.txt
#
# 프로그램을 compile하여 pyc를 만드는 방법
# python -m a.py

# 특정 디렉토리 아래에 있는
# python -m compileall .


import os, sys
import hashlib

#f = open(sys.argv[1], 'rb')
f = open("P.py", 'rb')
data = f.read()
f.close()

print ('MD5 : '       + hashlib.md5(data).hexdigest()    )
print ('SHA-1 : '     + hashlib.sha1(data).hexdigest()   )
print ('SHA-256 : '   + hashlib.sha256(data).hexdigest() )
print ('File Size : ' + str(os.path.getsize("P.py")) + ' Byte'  )