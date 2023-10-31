#-------------------------------------------------------------------------------
# Purpose:     2019 Power Python
# Author:      Cho
# 투리를 일반적인 vector[ N ], list[ ]의 index로 표현하는 방법
#-------------------------------------------------------------------------------

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def __str__(self):
        return str(self.data)

class Tree:
    def __init__(self):
        self.root = None

    def preorderTraversal(self, node):
        print(node, end=' ')
        if not node.left  == None : self.preorderTraversal(node.left)
        if not node.right == None : self.preorderTraversal(node.right)

    def inorderTraversal(self, node):
        if not node.left  == None : self.inorderTraversal(node.left)
        print(node, end=' ')
        if not node.right == None : self.inorderTraversal(node.right)

    def postorderTraversal(self, node):
        if not node.left  == None : self.postorderTraversal(node.left)
        if not node.right == None : self.postorderTraversal(node.right)
        print(node, end=' ')

    def makeRoot(self, node, left_node, right_node):
        if self.root == None:
            self.root = node
        node.left = left_node
        node.right = right_node

#  0  1  2  3  4  5  6
#[ -, *, /, A, B, C, D]
# -의 두 자식은 *와 /, *의 두 자식은 A, B

node = []
node.append(Node('W'))
node.append(Node('R'))
node.append(Node('S'))
node.append(Node('A'))
node.append(Node('B'))
node.append(Node('C'))
node.append(Node('D'))
node.append(Node('P'))
node.append(Node('Q'))



m_tree = Tree()
for i in range(int(len(node)/2)):
    m_tree.makeRoot(node[i],node[i*2+1],node[i*2+2])

print( '\n Preorder 순회 :', end=" ") ;  m_tree.preorderTraversal(m_tree.root)
print( '\n Inorder 순회 : ', end=" ") ; m_tree.inorderTraversal(m_tree.root)
print( '\n Postorder 순회 :', end=" ") ; m_tree.postorderTraversal(m_tree.root)