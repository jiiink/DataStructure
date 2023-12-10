#-------------------------------------------------------------------------------
# Purpose:     2021 Prof. Zoh's Work     "착하게 살지 말자."
# Author:      Cho
# Created:     2021-11-08
#-------------------------------------------------------------------------------


int_val = 4
str_val = 'PNU CSED'
flt_val = 24.56

# 단 정수를 그대로 출력됩니다. 이것 조심

print("The integer hash value is : " + str(hash(int_val)))
print("The string hash value is : " + str(hash(str_val)))
print("The float hash value is : " + str(hash(flt_val)))


# tuple are immutable
t1 = (1, 2, 3, 4, 5)
t2 = (1, 2, 3, 4, 4)
t3 = (1, 2, 3, 4, 3)
t4 = (1, 2, 3, 4, 5)
t5 = (1, 0, 3, 4, 5)

# mutable object는 hashing이 안됩니다.
for w in [t1, t2, t3, t4, t5]:
    print(f" {w=} hash= {str(hash(w))}")
