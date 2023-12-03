#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
#-------------------------------------------------------------------------------



def BinaryTree(r):
    return([r, [], []] )

def insertLeft(root, newBranch):
    t = root.pop(1) #root list를 말함
    if len(t) > 0:  #값이 존재하면,
        root.insert(1, [newBranch, t, []])
    else:  root.insert(1, [newBranch,[],[]])

def insertRight(root, newBranch):
    t = root.pop(2) #root list를 말함
    if len(t) > 0: #값이 존재하면,
        root.insert(2, [newBranch, t, []])
    else: root.insert(2, [newBranch,[],[]])

def getRootVal(root):
    return root[0]

def setRootVal(root, newVal):
    root[0] = newVal

def getLeftChild(root):
    return root[1]

def getRightChild(root):
    return root[2]


r = BinaryTree(3)    #3을 루트로 가지는 Binary Tree를 생성
insertLeft (r,4)     #root의 LeftChild로 4를 넣는다.
insertLeft (r,5)     #root의 LeftChild로 5를 넣는다.
insertRight(r,6)     #root의 RightChild로 6를 넣는다.
insertRight(r,7)     #root의 RightChild로 7를 넣는다.
mytree = getLeftChild(r)
print(mytree)

setRootVal(mytree,9)
print(r)
insertLeft(mytree,11)
print(r)
print(getRightChild(getRightChild(r)))