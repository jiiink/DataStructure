
#Lmap={ [1,2]:"Busan", [42,56]:"Toronto"}
# List는 mutable 자료형, 즉 삽입 삭제가 언제든 가능한 자료형이므로
# 고정적인, 즉 변하지 않아야 하는 dict key를 성질일 만족하지 못하므로
# Dict의 Key가 될 수 없음. 오류가 난다.


D={ }

ml=[ 3,4,5]

# 리스트는 반드시 tuple로 바꿔서 key로 사용해야 한다.

D[ tuple(ml) ]="삼-사-오"

print( f" D[(3,4,5)]= {D[(3,4,5)]}")