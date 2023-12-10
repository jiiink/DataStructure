
pnum={}  # pnum은 사전(dict) 변수임을 선언을 먼저 햐애한다.``   ``-
pnum["오달수"]="010-4567-2348"
pnum["팽길탄"]="010-1370-6756"
pnum["여척두"]="010-7834-0987"
pnum["소두명"]="010-0330-7745"


w="여척두"
z="종도천"

print("w=", w)
print(w, "전화번호", pnum[w])
#print(z, "전화번호", pnum[z])

for w in pnum.keys() :
    print(w, "==>", pnum[w])
