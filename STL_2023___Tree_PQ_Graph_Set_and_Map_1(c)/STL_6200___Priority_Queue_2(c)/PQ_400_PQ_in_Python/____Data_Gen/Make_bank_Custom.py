#-*- coding: cp949 -*-
# Data Generator code
# 은행이 들어오는 사람 이름과 금액을 만듭니다.
import random

lv=[ "a", "e", "a", "i", "i", "o", "u",  "o", ]
lc=[ "c", "f",  "f", "h", "k", "m", "n", "s", "t", "t", "z"]


N=50
print( N)
for x in range(N):
    w=""
    wlen= random.randrange(2,6)
    wmoney= random.randrange(-100,100)
    if random.randrange(1,100) < 20 :
        print ("Call", random.randrange(1,4))
    else :
        for y in range(wlen) :
            xc= random.choice(lc)
            xv= random.choice(lv)
            w=w+xc+xv  # 사람 이름 만들기

        print (w, wmoney*10)


