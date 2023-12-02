
"""
filter는 반복 가능한 객체에서 특정 조건에 맞는 요소만 가져오는데,
filter에 지정한 함수의 반환값이 True일 때만 해당 요소를 가져온다.

- filter(함수, 반복가능한객체)

먼저 def로 함수를 만들어서 filter를 사용해보겠습니다.
다음은 리스트에서 5보다 크면서 10보다 작은 숫자를 가져옵니다.
"""

def f(x):
    return 5 < x  and x < 10

a = [8, 23, 2, 10, 15, 7, 11, 49, 13, 30, 11]
fa = list(filter(f, a))
print( "fa= ", fa )

fb = list(filter(lambda x: 10 <= x  and x <= 15, a))
print( "fb= ", fb )

