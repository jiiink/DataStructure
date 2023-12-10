
# 사전 dict의 항목은 Key:Value의 쌍의 집합으로 구성되어 있다.

alcodic = { }

alcodic["soju"] = "n. 소주, 돈없는 대학생이 자주 마시는 술, 2병 마시면 많이 취함"
alcodic["beer"] = "n. 맥주, 여유가 있을 때 마시는 술. 근데 국산맥주는 너무 맛이 없음 "
alcodic["wine"] = "n. 와인, 똥폼 잡을 때 마시는 술. 3만원 이하는 싸구려 "
alcodic["mead"] = "n. 미드, 벌꿀을 발표시켜 만든 술"
alcodic["단술"] = "n. 단술, 알라들이 좋아하는 술. 일명 식혜라고도 함. 진짜 술은 아님"

print(list(alcodic.keys( )))
print(list ( alcodic.keys() ))

my = "soju"
your = "단술"
print(alcodic[ my])
print(alcodic[ your])
print(type(your))

hers = "whiskey"
if hers in list(alcodic.keys()) :
    print(alcodic[ hers])
else :
    print(hers, " 에구...그런 key 값의 표제어는 사전에 없십니다. ")


print(alcodic.get("whiskey", "그런 값은 없습니다."))
