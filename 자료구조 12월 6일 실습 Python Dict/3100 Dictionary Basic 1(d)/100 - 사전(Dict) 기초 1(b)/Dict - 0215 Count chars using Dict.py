# 특정 집합에서 각 개체가 나타난 횟수를 계산할 때 매우 매우 편함.


mdic={}
L = list("summertimekiller")

for c in L :
    #print(c)
    if c in mdic.keys():
        mdic[c] += 1
    else :
        print(c,"가 없음")
        mdic[c]= 1   # 새로운 항목을 추가

for w in mdic.keys():
    print("key=", w, " ", mdic[w])