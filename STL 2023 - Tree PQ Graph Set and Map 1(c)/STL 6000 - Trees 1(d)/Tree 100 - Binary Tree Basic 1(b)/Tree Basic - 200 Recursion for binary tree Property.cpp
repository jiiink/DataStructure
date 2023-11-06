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

	if (!root) 		return; 	// base condition

	setToBST(s, root->left); 	// first move to the left subtree and update items
	auto it = s.begin(); 	 	// iterator initially pointing to the beginning of set

	root->data = *it;       	// copying the item at beginning of set(sorted) to the tree.
	s.erase(it); 	            // now erasing the beginning item from set.
	setToBST(s, root->right); 	// now move to right subtree and update items

}

Node* newNode(int data) {       // helper function to create a node
	Node* temp = new Node(); 	// dynamically allocating memory
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void inorder(Node* root) { // function to do inorder traversal
	if (!root) return;  	// null tree, ending 조건. recusrion에서는 이것이 아주 중요합니다. !!!!!!
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void preorder(Node* root) { // function to do inorder traversal
	if (!root) return;  // ending 조건. recusrion에서는 이것이 아주 중요합니다. !!!!!!
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

int Tdepth( Node *root) { // node 1개의 single tree의 depth는 1로 정의함.
	if (!root) return(0);  // null tree의 depth = 0 !!!!!!
	int ldepth, rdepth ;
	ldepth = Tdepth(root->left);
	rdepth = Tdepth(root->right);

	return( max(ldepth,rdepth)+1 ) ;

}

int Tleaf( Node *root) {
	if ( !root )  return(0) ;          // null binary tree
	if ( !root->left && !root->right ) return(1);  // leaf node. !!!!!!

	int lf, rf ;
	lf = Tleaf(root->left);
	rf = Tleaf(root->right);
	return( lf + rf ) ;
}

int Tsize( Node *root) {
	if ( !root )  return(0) ;
	if ( !root->left && !root->right ) return(1);  // leaf node. !!!!!!

	int ls, rs ;
	ls = Tsize(root->left);
	rs = Tsize(root->right);
	return( ls + rs + 1 ) ;
}

int main() {
	Node* root  = newNode(5);
	root->left  = newNode(7);
	root->right = newNode(9);
	root->right->left = newNode(10);
	root->left->left  = newNode(1);
	root->left->right = newNode(6);
	root->right->right = newNode(11);
	root->right->left->right = newNode(8) ;
	root->right->left->left  = newNode(12) ;
	root->right->left->left->left  = newNode(17) ;

	/* --------------- 위에서 만든 binary tree의 꼴.
		 5         ......... 1
		/ \
	   7   9       ......... 2
	   /\  / \
	  1 6 10 11    ......... 3
	      / \
	     12 8      ......... 4
         /
        17         ......... 5
	-------------------------     */


	cout << "\n Inorder ( Tree )= " << endl;
	inorder(root);
	cout << "\n Preorder ( Tree )= " << endl;
	preorder(root);

	cout << "\n Tree의 Depth= " << Tdepth(root) ;
	cout << "\n Tree의 Leaf 수=  " << Tleaf(root) ;
	cout << "\n Tree의 노드 수=  "   << Tsize(root) ;


	root->right->left->left->left->right  = newNode(  4) ;
	root->right->left->left->left->left   = newNode( -3) ;
	root->right->right->right = newNode(3);

	/* --------------- 위에서 만든 binary tree의 꼴.
		 5       ........... 1
		/ \
	   7   9     ............ 2
	   /\  / \
	  1 6 10 11  ............ 3
	      / \  \
	     12 8   3 ........... 4
         /
       17          .......... 5
      /  \
	-3	  4  ...............  6
	-------------------------     */
    cout << "\n\n 추가 node insert 후 " ;
	cout << "\n Tree의 Depth= " << Tdepth(root) ;
	cout << "\n Tree의 Leaf 수=  " << Tleaf(root) ;
	cout << "\n Tree의 nodes=  "   << Tsize(root) ;
	cout << "\n Tree의 Right subtree의 크기=  "   << Tsize(root->right) ;
	return 0;
}
