Box = [ 1, 2, 3, 1, 2, 3, 5, 6, 5, 6, 10 ]
# Box = [ 1, 2, 3, 1, 2, 3, 5, 6, 5, 6, 10 ]
# Box = [ 9, 8, 11, 2, 3, 5, 45, 21, 32, 11, 45, 45, 8, 13 ]
# Box = [ 7,7,7,7,7,7,7,7 ]



# 이 함수를 문제에서 설명한대로 고치시요
def Tomato( myv ):
    tv = myv[:]
    tv.append(99)
    return(tv)



print( Box )

Gong = Tomato( Box )
print( Gong )