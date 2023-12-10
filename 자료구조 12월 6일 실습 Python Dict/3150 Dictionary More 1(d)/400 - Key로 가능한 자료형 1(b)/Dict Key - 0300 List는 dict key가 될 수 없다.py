
#Lmap={ [1,2]:"Busan", [42,56]:"Toronto"}
# List는 mutable 자료형, 즉 삽입 삭제가 언제든 가능한 자료형이므로
# 고정적인, 즉 변하지 않아야 하는 dict key를 성질일 만족하지 못하므로
# Dict의 Key가 될 수 없음. 오류가 난다.

Qmap={ "Busan":[1,2], "Toronto":[42,56], "Dokdo":32, "BEXCO":"Love Me", 5:999}

print(Qmap[ "Busan" ])
print(Qmap[ "BEXCO" ])
print(Qmap[ 5 ])

print(list(Qmap.keys()))
print(list(Qmap.values()))


# C, C++, JAVA, .... hash function,
# dict, map
# Python이 제일 사용하게 편리.