/* CPP program to convert a Binary tree to BST using sets as containers. */
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
};

void storeinorderInSet(Node* root, set<int>& s)  {
	if (!root) 	return;

	storeinorderInSet(root->left, s); 	// visit the left subtree first
	s.insert(root->data);  //  데이터 삽입하기
	storeinorderInSet(root->right, s); 	// 오른쪽 subtree로 이동

}

void setToBST(set<int>& s, Node* root) { // 원소를 하나씩 복사함.

	if (!root) 		return;

	setToBST(s, root->left); // first move to the left subtree and update items
	auto it = s.begin(); 	// iterator initially pointing to the beginning of set

	root->data = *it; 	         // copying the item at beginning of set(sorted) to the tree.
	s.erase(it); 	             // now erasing the beginning item from set.
	setToBST(s, root->right); 	// now move to right subtree and update items

}

void binaryTreeToBST(Node* root) { // Binary tree를 BST로 바꿈.
	set<int> s;

	storeinorderInSet(root, s); 	// tree를 inorder로 방문하면서 원소를 수집함.
	setToBST(s, root);

}

Node* newNode(int data) {       // 새 노드를 memory allocation으로 만듬
	Node* temp = new Node();
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(Node* root) { // inorder traversal
	if (!root)
		return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int main() {
	Node* root = newNode(5);
	root->left = newNode(7);
	root->right = newNode(9);
	root->right->left = newNode(10);
	root->left->left = newNode(1);
	root->left->right = newNode(6);
	root->right->right = newNode(11);

	/* 아래와 같은 모양의 Binary Tree를 만든다.
		 5
		/ \
	   7   9
	  / \  / \
	 1  6 10 11 */

	binaryTreeToBST(root); // converting the above Binary tree to BST
	cout << "Inorder traversal of BST is: " << endl;
	inorder(root);
	return 0;
}
