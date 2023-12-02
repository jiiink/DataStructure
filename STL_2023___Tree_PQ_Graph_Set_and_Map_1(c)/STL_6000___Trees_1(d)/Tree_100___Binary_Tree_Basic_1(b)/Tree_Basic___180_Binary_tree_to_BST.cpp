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

void setToBST(set<int>& s, Node* root) { // function to copy items of set one by one

	if (!root) 		return; // base condition

	setToBST(s, root->left); // first move to the left subtree and update items
	auto it = s.begin(); 	// iterator initially pointing to the beginning of set

	root->data = *it; 	// copying the item at beginning of set(sorted) to the tree.
	s.erase(it); 	// now erasing the beginning item from set.
	setToBST(s, root->right); 	// now move to right subtree and update items

}

void binaryTreeToBST(Node* root) { // Converts Binary tree to BST.
	set<int> s;
	storeinorderInSet(root, s); 	// populating the set with the tree's inorder traversal data
	setToBST(s, root);
}

Node* newNode(int data) { // helper function to create a node
	Node* temp = new Node(); 	// dynamically allocating memory
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(Node* root) { // function to do inorder traversal
	if (!root) return;  // ending 조건. recusrion에서는 이것이 아주 중요합니다. !!!!!!
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
	root->right->left->right = newNode(8) ;

	/* 위에서 만든 binary tree의 꼴.
		 5
		/ \
	   7   9
	   /\  / \
	  1 6 10 11          */

	// binaryTreeToBST(root); // converting the above Binary tree to BST
	cout << "Inorder ( Tree )= " << endl;
	inorder(root);
	return 0;
}
