
md={ }
md[  "한"]=1
md[  "둘"]=2
md[  "셋"]=3
md[  "넷"]=4
md["다섯"]=5
md["여섯"]=6




kw0 = input("한글을 입력하시오:")
print(">>>>", md.get( kw0, 999)     , "<<<")


if kw0 in list(md.keys( )) :
    print("있음")
    print(md[kw0])
else :
    print(kw0, "는 사전에 없습니다")
