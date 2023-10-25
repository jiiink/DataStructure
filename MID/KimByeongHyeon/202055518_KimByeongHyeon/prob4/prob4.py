#--------------------------------------------------------
# Author:      Zoh QueFir
# Created:     19-10-2023
#--------------------------------------------------------

L1 = [ 153, 213, 134, 156, 170, 250, 233, 204, 167, 281, 266, 133, 199, 178 ]

def showQ( MSG, myL):
    print(f"\n Queue {MSG} - 출력하기 ")
    for w in myL :
        print(f">  {w}")

def Rearrange( inL ):
    myL = inL[:]
    myL.pop(0)
    myL.append(999)
    return( myL)




NewJul = Rearrange(L1)
showQ( "처음 줄 ", L1)
showQ( "다시 정리된 줄 ", NewJul)