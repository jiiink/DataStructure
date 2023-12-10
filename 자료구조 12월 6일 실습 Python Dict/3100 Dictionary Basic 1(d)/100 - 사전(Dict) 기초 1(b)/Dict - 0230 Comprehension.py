
# List Comprehension, 가장 Pythonic 하게 리스트를 만드는 방법



da = { w:str(w*10)    for w in range(25) if (w+11)**5 %3 == 1 }
#           생성 for 문장:     조건문
print("da1=", da )

la = { w**2-10:w    for w in range(1,10) }
#           생성 for 문장:     조건문
print("da2=", da )


dc = { (x,y):(str(x)+y) for x in range(3) for y in list("FM") }
print("dc= ", dc )

ld = { (x,y):(y+str(x))  for y in list("FM") for x in range(3) }
print("dd= ", ld )

le = { a+b+c:(len(a)+len(b)+len(c)) for a in list("man") \
                                    for b in list("dog") \
                                    for c in list("ox") }

for w in le :
    print(w, le[w] )
