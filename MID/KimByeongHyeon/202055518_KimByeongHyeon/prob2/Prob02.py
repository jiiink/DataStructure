#--------------------------------------------------------
# Author:      Zoh Que
# Created:     19-10-2023
#--------------------------------------------------------

stack = [ 6, 7, 12, 3, 34, 34, 3, 10, 10, 10, 3, 51, 33, 33, 41 ]

def Pstack( msg, S ):
    print(f"\n {msg}: ")
    for w in S :
        print(f" > {w}")

def squiz( mystack):
    mystack.append(-1)






Pstack("> 처음상태 ", stack)

squiz( stack )

Pstack("> 바뀐 상태 ", stack)
