

"""
filter 함수
? filter(함수, literable)
? 두번째 인수인 반복 가능한 자료형 요소들을 첫번째 인자 함수에 하나씩 입력하여
  리턴값이 참인 것만 묶어서 돌려준다.
? 함수의 리턴 값은 참이나 거짓이어야 한다.
"""

li = [-2, -3, 5, 6]

# 양수만 반환하는 리스트
def ft(li):
    result = []
    for e in li:
        if e > 0:
            result.append(e)
        else:
            pass
    return result


# filter 함수 사용시
def positive(x):
  return x > 0

print(list(filter(positive, li)))

# filter + lambda 함수 사용시
print(list([x for x in li if x > 0]))
