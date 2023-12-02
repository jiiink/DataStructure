#include <bits/stdc++.h>
using namespace std;

enum Boolean { FALSE, TRUE};
class Tree;

class TreeNode {            // Æ®¸®¸¦ ±¸¼ºÇÏ´Â atom node 1°³
friend class Tree;
friend int equal(TreeNode*, TreeNode*);
private:
    char data;              // µ¥ÀÌÅÍ¸¦ ´ã¾ÆµÎ´Â °ø°£
    TreeNode *LeftChild;    // ¿ŞÂÊ Subtree Pointer
    TreeNode *RightChild;

    TreeNode() { LeftChild = RightChild = 0;};
    TreeNode(char ch, TreeNode *Lefty, TreeNode *Righty) {
	            data = ch;
               	LeftChild = Lefty; 	RightChild = Righty;
    } // »õ·Î¿î ³ëµå¸¦ ¸Å¾î´Ù´Â °úÁ¤
};

class Tree { // Æ®¸® ÀüÃ¼·ê ³ªÅ¸³»´Â Å¬·¡½º -> ÀÌ°ÍÀº ½ÇÁ¦ ÇÑ TreeNode¸¦ °¡¸£Å°´Â Æ÷ÀÎÅÍ
friend int operator==(const Tree&, const Tree&);
private:
    TreeNode *root;
    void inorder   (TreeNode *);         // Æ®¸®¿¡ Àû¿ëÇÒ ¼ö ÀÖ´Â ÇÔ¼ö ¸ğÀ½
    void preorder  (TreeNode *);
    void postorder (TreeNode *);
    TreeNode* copy (TreeNode *);
public:
    void setup     ();                   // ¿ÜºÎ¿¡¼­ Tree¸¦ Á¶ÀÛÇÒ ¼ö ÀÖ´Â ÇÔ¼ö ¸ğÀ½
    void inorder   ();
    void preorder  ();
    void postorder ();
    Tree(const Tree&);
    Tree           () {root = 0;};
};

void Tree::setup() {                     // Æ®¸®¸¦ ÃÊ±âÈ­ÇÏ´Â ÇÔ¼ö
    root = new TreeNode('R',0,0);
    root->LeftChild = new TreeNode('B',0,0);                  // AÀÇ ¿ŞÂÊ¿¡ B¸¦ ¸Å´ã
    root->RightChild = new TreeNode('W',0,0);                 // AÀÇ ¿À¸¥ÂÊ¿¡ W¸¦ ¸Å´ã
    root->LeftChild->LeftChild = new TreeNode('C', 0, 0);     // BÀÇ ¿ŞÂÊ¿¡ C¸¦ ¸Å´ã
    root->RightChild->LeftChild = new TreeNode('P', 0, 0);     // BÀÇ ¿ŞÂÊ¿¡ C¸¦ ¸Å´ã
    root->LeftChild->RightChild = new TreeNode('D', 0, 0);    // BÀÇ ¿ŞÂÊ¿¡ D¸¦ ¸Å´ã
    root->LeftChild->LeftChild->LeftChild = new TreeNode('E', 0, 0);
    root->LeftChild->LeftChild->RightChild = new TreeNode('X', 0, 0);
	// CÀÇ ¿ŞÂÊ¿¡ E¸¦ ¸Å´ã
} // end of setup( )

void Tree::inorder(){
   inorder(root);
}

void Tree::preorder(){
   preorder(root);
}

void Tree::postorder(){
   postorder(root);
}

void Tree::inorder(TreeNode *CurrentNode){
     if (CurrentNode) {
	 inorder(CurrentNode->LeftChild);
	 cout << CurrentNode->data << " ";
	 inorder(CurrentNode->RightChild);
     }
}

void Tree::preorder(TreeNode *CurrentNode){
     if (CurrentNode) {
	 cout << CurrentNode->data<< " ";
	 preorder(CurrentNode->LeftChild);
	 preorder(CurrentNode->RightChild);
     }
}

void Tree::postorder(TreeNode *CurrentNode){
     if (CurrentNode) {
	 postorder(CurrentNode->LeftChild);
	 postorder(CurrentNode->RightChild);
	 cout << CurrentNode->data<< " ";
     }
}

Tree::Tree(const Tree& s){
  root = copy(s.root);
} // Tree¸¦ »õ·Ó°Ô »ı¼ºÇÏ¿© ´Ù¸¥ Tree·Î º¸³»ÁÜ, º¹»ç »ı¼ºÀÚ

TreeNode* Tree::copy(TreeNode *orignode){
  if (orignode) {
      TreeNode *temp = new TreeNode;
      temp->data = orignode->data;
      temp->LeftChild = copy(orignode->LeftChild);
      temp->RightChild = copy(orignode->RightChild);
      return temp;
  }
  else return 0;
}


int operator==(const Tree& s, const Tree& t){ // TreeÀÇ ³»¿ëÀÌ °°ÀºÁö¸¦ ºñ±³ÇÔ
   return equal(s.root, t.root);
}

int equal(TreeNode *a, TreeNode *b) { // ½ÇÁ¦·Î ÁÖ¾îÁø µÎ °³ÀÇ root ³ëµå¸¦ ºñ±³
 if ((!a) && (!b)) return 1;          // µÑ´Ù Null ÀÌ¸é °°Áö·Õ
 if (a && b &&                        // ¸¸ÀÏ µÑ ´Ù PointerÀÌ°í , ±× ³ëµåÀÇ µ¥ÀÌÅÍ°¡ °°´Ù¸é
    (a->data == b->data)
    && equal(a->LeftChild, b->LeftChild)      // ¿Ş ºÎÆ®¸®°¡ °°¾Æ¾ßÇÏ°í
    && equal(a->RightChild, b->RightChild) )  // ¿À¸¥ÂÊ ºÎÆ®¸®°¡ ¯˜À» °æ¿ì °°°ÔµÈ´Ù.
       return 1;
 return 0;
} // end of equal()

int main() {
	Tree t;                  // t´Â Tree Å¸ÀÔÀÇ º¯¼öÀÌ´Ù.
	t.setup();               // t ¿¡ ÀÌ°Í Àú°ÍÀ» ¸¶±¸ ÃÄ ³Ö´Â´Ù.
	Tree s = t;              //  t¸¦ »õ·Î¿î Æ®¸®  s¿¡ º¹»çÇØ¼­ ³Ö´Â´Ù.


	cout << " Tree¸¦ ¹æ¹®ÇØº¸±â " ;
    cout << "\n Inorder Tree Traversal = " ;
	s.inorder();             // s¸¦ inorder·Î Âï¾îº»´Ù ?? ¹¹ °¡ ³ª¿Ã±î¿ä ?
	cout << "\n Preorder Tree Traversal = " ;
	s.preorder();             // s¸¦ inorder·Î Âï¾îº»´Ù ?? ¹¹ °¡ ³ª¿Ã±î¿ä ?
	cout << "\n Postorder Tree Traversal = " ;
	s.postorder();             // s¸¦ inorder·Î Âï¾îº»´Ù ?? ¹¹ °¡ ³ª¿Ã±î¿ä ?


	cout << "\n\n\n s¿Í t·Î ´ëÇ¥µÇ´Â Tree°¡ Á¤¸» °°ÀºÁö ºñ±³ÇØ º¾½Ã´Ù. " << endl;
	if (s == t) cout << "s == t ÀÔ´Ï´Ù. " ;
	else cout << "s != t ÀÎµª¼î. °°Áö ¾Ê´Ù´Â ¸»¾¸. " ;
	cout << endl;
	getchar() ;

} // end of main( )
