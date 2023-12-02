#include <bits/stdc++.h>
using namespace std;

enum Boolean {FALSE, TRUE};

template <typename Type>
class Element {
  public:
    Type key;
};


template <typename Type>
class BstNode {
    template <typename T> friend class BST;
  public:
  private:
    Element<Type> data;
    BstNode *LeftChild, *RightChild;
    void display(int i);
    void treeprint(int i);
};

template <typename Type>
class BST {
  public:
    BST(BstNode<Type> *init = 0) {
        root = init;
    }; //   BST& operator=(const BST&);
    Boolean Insert(const Element<Type>& x);
    Boolean Insert(const Type);
// Boolean Delete(const Element<Type>&);   // 나중에 여러분이 직접 구현해야 합니다.
    BstNode<Type>* Search(BstNode<Type>*, const Element<Type>&);
    BstNode<Type>* Search(const Element<Type>&);
    BstNode<Type>* IterSearch(const Element<Type>&);

    void treeprint() {
        cout << "\n";
        root->treeprint(1);
    }

    void display() {
        cout << "\n";
        if (root)
            root->display(1);
        else
            cout << "0\n";
    };
    Element<Type>* Split(Type i, BST& B, BST& C, Element<Type> &x);
  private:
    BstNode<Type> *root;
};



template <typename Type>
void BstNode<Type>::display(int i) {
    cout << "Position " << i << ": data.key " << data.key << "\n";
    if (LeftChild)
        LeftChild->display(2*i);
    if (RightChild)
        RightChild->display(2*i + 1);
};

template <typename Type>
Element<Type>* BST<Type>::Split(Type i, BST<Type>& B, BST<Type>& C,
                                Element<Type> &x) { // Split the binary search tree with respect to key @i@

    if (!root) {
        B.root = C.root = 0;    // empty tree
        return 0;
    }
    BstNode<Type> *Y = new BstNode<Type>;
    BstNode<Type> *L = Y;
    BstNode<Type> *Z = new BstNode<Type>;
    BstNode<Type> *R = Z;
    BstNode<Type> *t = root;
    while (t)
        if (i == t->data.key) {  // split at @t@
            L->RightChild = t->LeftChild;
            R->LeftChild = t->RightChild;
            x = t->data;
            B.root = Y->RightChild;
            delete Y;
            C.root = Z->LeftChild;
            delete Z;
            return &x;
        } else if (i < t->data.key) {
            R->LeftChild = t;
            R = t;
            t = t->LeftChild;
        } else {
            L->RightChild = t;
            L = t;
            t = t->RightChild;
        }
    L->RightChild = R->LeftChild = 0;
    B.root = Y->RightChild;
    delete Y;
    C.root = Z->LeftChild;
    delete Z;
    return 0;
}

template <typename Type>
void BstNode<Type>::treeprint(int l) {
    if (this) {
        (this->RightChild)->treeprint(l+1);
        for (int i = 1; i <= l; i++)
            cout << "   ";
        cout << this->data.key << "\n";
        (this->LeftChild)->treeprint(l+1);
    };
};

template <typename Type>
BstNode<Type>* BST<Type>::Search(BstNode<Type>* b, const Element<Type> &x) {
    if (!b)
        return 0;
    if (x.key == b->data.key)
        return b;
    if  (x.key < b->data.key)
        return Search(b->LeftChild,x);
    return Search(b->RightChild,x);
};

template <typename Type>
BstNode<Type>* BST<Type>::Search(const Element<Type>& x) {
    return Search(root, x);
}

template <typename Type>
BstNode<Type>* BST<Type>::IterSearch(const Element<Type>& x) {
    for (BstNode<Type> *t = root;  t; ) {
        if (x.key == t->data.key)
            return t;
        if (x.key < t->data.key)
            t = t->LeftChild;
        else
            t = t->RightChild;
    }
    return 0;
}

template <typename Type>
Boolean BST<Type>::Insert(const Type _element) {
    Element<Type> x;
    x.key = _element;
    BstNode<Type> *p = root;
    BstNode<Type> *q = 0;
    while (p) {
        q = p;
        if (x.key == p->data.key)
            return FALSE; //x.key is already in t
        if (x.key < p->data.key)
            p = p->LeftChild;
        else
            p = p->RightChild;
    };

    p = new BstNode<Type>;
    p->LeftChild = p->RightChild = 0;
    p->data = x;

    if (!root)
        root = p;
    else if (x.key < q->data.key)
        q->LeftChild = p;
    else
        q->RightChild = p;

    return TRUE;
}

template <typename Type>
Boolean BST<Type>::Insert(const Element<Type>& x) {
    BstNode<Type> *p = root;
    BstNode<Type> *q = 0;
    while (p) {
        q = p;
        if (x.key == p->data.key)
            return FALSE; //x.key is already in t
        if (x.key < p->data.key)
            p = p->LeftChild;
        else
            p = p->RightChild;
    };

    p = new BstNode<Type>;
    p->LeftChild = p->RightChild = 0;
    p->data = x;

    if (!root)
        root = p;
    else if (x.key < q->data.key)
        q->LeftChild = p;
    else
        q->RightChild = p;

    return TRUE;
}

int main() {
    BST<int> m;
    vector<int> my_vec = {5, 3, 11, 3, 15, 2, 8, 22, 20, 9};

    for (auto i : my_vec) {
        m.Insert(i);
    }

    m.treeprint();
    return 0;
}


