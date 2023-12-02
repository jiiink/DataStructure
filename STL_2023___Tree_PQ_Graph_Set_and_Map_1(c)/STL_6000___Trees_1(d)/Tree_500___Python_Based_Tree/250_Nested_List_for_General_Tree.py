#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------

myTree = ['a', ['b', ['d',[],[]], ['e',[],[]] ], ['c', ['f',[],[]], []] ]
print(myTree)
print('left = ',  myTree[1])
print('root = ',  myTree[0])
print('right = ', myTree[2])


def Show_subtrees(T):
    for i,w in enumerate(T) :
        print( i, "번째 subtree=", w )

def depth( T ):  # 과제물
    if len(T) <= 0 : return(0)
    else :
        for w in T : # 각 subtree의 depth를 구한 뒤에...
            continue
# end of depth



print( len(myTree))
Show_subtrees( myTree )

empty =[]
print( "empty=", depth( empty))