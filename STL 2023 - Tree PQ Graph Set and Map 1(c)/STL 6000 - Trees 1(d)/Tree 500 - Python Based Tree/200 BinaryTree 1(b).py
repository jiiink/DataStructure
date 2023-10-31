# Python을 이용한 자료구조Copyright 2019
# 11월 13일 실습. Python Class를 모두 이해하고 있다고 가정하고...

'''Binary Tree Class and its methods'''
class BinaryTree:
	def __init__(self, data):
		self.data = data  # root node
		self.left = None  # left child
		self.right = None  # right child

	def setData(self, data):  # 데이터 값을 setting 합니다.
		self.data = data

	def getData(self):
		return self.data

	def getLeft(self): 	# 왼쪽 child node로 갑니다.
		return self.left
	def getRight(self):
		return self.right

	def setLeft(self, left): 	# get left child of a node
		self.left = left
	def setRight(self, right):
		self.right = right

	def insertLeft(self, newNode): # 현재 위치 노드의 왼쪽에 NewNode를 매어 담.
		if self.left == None:
			self.left = BinaryTree(newNode)
		else:
			temp = BinaryTree(newNode)
			temp.left = self.left
			self.left = temp

	def insertRight(self, newNode):
		if self.right == None:
			self.right = BinaryTree(newNode)
		else:
			temp = BinaryTree(newNode)
			temp.right = self.right
			self.right = temp


# Pre-order recursive traversal.
# The nodes' values are appended to the result list in traversal order
def PreorderTree(root, result):
    if not root:  return
    result.append(root.data)  # subtree의 data를 result[ ]  List result 뒤에 추가 함
    PreorderTree(root.left, result)
    PreorderTree(root.right, result)

def InorderTree(root, result):
	if not root: return
	InorderTree(root.left, result)
	result.append(root.data)  # subtree의 data를 result[ ]  List result 뒤에 추가 함
	InorderTree(root.right, result)

# Post-order recursive traversal. The nodes' values are appended to the result list in traversal order
def PostorderTree(root, result):
    if not root:  return
    PostorderTree(root.left, result)
    PostorderTree(root.right, result)
    result.append(root.data)   # subtree의 data를 result[ ]  List result 뒤에 추가 함

# 하나의 Binary Tree를 만들어 봅시다. Search Tree는 아닙니데이. 그냥 막 넣음
root = BinaryTree(51)
print("Test 1=", (root.getData()))

root.insertLeft(15)
root.insertLeft(13)
root.insertLeft(76)
print("Test 2=",(root.getLeft().getData()))
root.insertRight(32)
print("Test 3=",(root.getRight().getData()))
root.getRight().setData(27)
print("Test 4=",(root.getRight().getData()))
root.getRight().insertLeft(123) #root의 오른쪽 child의 왼쪽에 123을 입력함.

myout=[]
PreorderTree(root, myout)
print("By preorder=", myout )
myout=[]
InorderTree(root, myout)
print("By inorder=", myout )


