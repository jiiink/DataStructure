
#Lmap={ [1,2]:"Busan", [42,56]:"Toronto"}
# List는 mutable 자료형, 즉 삽입 삭제가 언제든 가능한 자료형이므로
# 고정적인, 즉 변하지 않아야 하는 dict key를 성질일 만족하지 못하므로
# Dict의 Key가 될 수 없음. 오류가 난다.
import numpy

narr = numpy.array([1,2,3])
myL=[1,2,3,4]
myt= tuple( myL )
myD = { 10: "ten"}

D=[ 34, "good", 45.67, False, [3,4,5], (9,0,8), narr, tuple(narr),
    {3:"삼"}, tuple([1,2,3]), set([1,2,3]), frozenset([9,10])]

Gdict={}
for w in D :
    print(f" {w = }, \t\t { type(w)}", end=": ")
    try :
        Gdict[w]= 2021
        print( f" 성공")
    except TypeError :
        print( f" 실패")