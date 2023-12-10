

family = {'father':'john','mother':'mary','sister':'jene'}

print(family['father'])
print(family['mother'])
print(family['sister'])

print(list(family.keys()))
print(list(family.values()))
print(list(family.items()))

print()

print('father' in family)
print('mother' in family)

print('john' in family)
print('mary' in family)

print()

#사전에 추가
family["brother"] = 'kane'
print(family)
print()

#제거
del family["sister"]
print(family)
print()

price_list = {"soju" : 1300, "beer" : 1950, "makguli": 1200, "wine":10000}

print(price_list)

print("개수 :",len(price_list))

price_list["dongdongju"] = 1100

print(price_list)

# 얕은 복사 깊은 복사
print("얕은 복사")
print("이전가격 : ", price_list)
price_new = price_list
print("바뀐가격 : " , price_new)

print()

price_new["soju"]=1500
print("이전가격 : ", price_list)
print("바뀐가격 : ", price_new)
print()

print("깊은복사")
price_new_fixed = price_list.copy()

price_new_fixed["beer"]=2500
print("고치기전 : ", price_list)
print("고친 후  : ", price_new_fixed)
print()

#반복문
print("가격표")
for key in price_list :
    print(key, price_list[key])


print("what")


def add(a,b):
    return a+b

def sub(a, b):
    return a-b

#함수 저장
calculator = {0:add , 1:sub}

print(calculator[0](5, 3))
print(calculator[1](5, 3))