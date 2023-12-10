#-------------------------------------------------------------------------------
# Author:      Zoh
# Created:     2020-05-02
#-------------------------------------------------------------------------------



# List Comprehension, 가장 Pythonic 하게 리스트를 만드는 방법



la = [ w    for w in range(25) if (w+11)**5 %3 == 1 ]
#           생성 for 문장:     조건문
print("la1=", la )

la = [ w**2-10    for w in range(1,10) ]
#           생성 for 문장:     조건문
print("la2=", la )


lc = [ (x,y) for x in range(3) for y in list("FM") ]
print("lc= ", lc )

ld = [ (x,y)  for y in list("FM") for x in range(3) ]
print("ld= ", ld )

le = [ a+b+c for a in list("man") for b in list("dog") for c in list("ox")]

for w in le :
    print(w)
