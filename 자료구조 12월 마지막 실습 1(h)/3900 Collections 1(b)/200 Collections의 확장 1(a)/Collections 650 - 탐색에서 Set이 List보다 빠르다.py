#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-05-03
#-------------------------------------------------------------------------------

# 어떤 집합에서 원소의 존재여부를 확인할 때
# 두가지 방법. 리스트와 집합

# 두 방법의 결과는 같으나 hashing이 가능한 집합(Set)이 더 빠르다.
# 더 빠르다고

mylist = list("장하던금전벽우찬재되고남은터에")
myset  = set("장하던금전벽우찬재되고남은터에")

def lookup_set(x):
    return x in myset

def lookup_list(x):
    return x in mylist


test=list("벽오동타고남은것이")
for w in test :
    print(f"w={w}, {lookup_list(w)}")

print("\n In set()")
for w in test :
    print(f"w={w}, {lookup_set(w)}")
