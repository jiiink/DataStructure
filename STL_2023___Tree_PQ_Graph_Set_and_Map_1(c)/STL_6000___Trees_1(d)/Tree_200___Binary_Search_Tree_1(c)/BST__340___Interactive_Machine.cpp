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
    };

// BST& operator=(const BST&);
    Boolean Insert(const Element<Type>& x);
// Boolean Delete(const Element<Type>&);
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
    if (!b)                         return 0;
    if (x.key == b->data.key)       return b;
    if  (x.key < b->data.key)       return Search(b->LeftChild,x);

    return Search(b->RightChild,x);
};

template <typename Type>
BstNode<Type>* BST<Type>::Search(const Element<Type>& x) {
    return Search(root, x);
} // end of BST node Search( )

template <typename Type>
BstNode<Type>* BST<Type>::IterSearch(const Element<Type>& x) {
    for (BstNode<Type> *t = root;  t; ) {
        if (x.key == t->data.key)       return t;
        if (x.key < t->data.key)        t = t->LeftChild;
        else             t = t->RightChild;
    }
    return 0;
} // end of BST node IterSearch( )

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
} // end of node inert( )

int getOpCode(string cmd);
void error_notice(int errorCode, string extraMessage);

main() {
    BST<int> m;
    Element<int> a, b, c, d, e, f, g, h, i, j, k, l;

    string cmd;
    bool endflag = false;
    while(!endflag) {
        cout<<"BST> {exit, insert x, find x, print } :";
        cin>>cmd;
        int opcode = getOpCode(cmd);
        int opi;
        switch(opcode) {
        case 0: { //exit
            endflag = true;
            break;
        }//End of case 0
        case 1: { //insert
            if(cin >> opi) {
                cout<<"Insert "<<opi<<endl;
            } else
                error_notice(0,"print");
            break;
        }//End of case 1
        case 2: { //find
            if(cin >> opi) {
                cout<<"Find "<<opi<<endl;
            } else
                error_notice(0,"print");
            break;
        }//End of case 2
        case 3: { //print
            cout<<"Ready to print "<<opi<<endl;
            break;
        }//End of case 2
        default: {
            error_notice(1,"");
        }
        }//End of Switch
        cin.ignore(100, '\n' );
    }
    return 0;
} // end of main( )

int getOpCode(string cmd) {
    string command[] = { "exit","insert", "find", "print" };
    int i;
    int arraySize = sizeof(command)/sizeof(command[0]);
    for(i = 0 ; i < arraySize ; i++) {
        if(command[i] == cmd)
            return i;
    }
    return -1;
} // end of OPcode( ) analysis

void error_notice(int errorCode, string extraMessage) {
    string errorMessage[] = {"Invalid Operand on command",  "Invalid Command",};
    cout<<errorMessage[errorCode];

    switch(errorCode) { //Extra Doings
    case 0: {
        cout<<" : "<<extraMessage<<endl;
        cin.clear();
        break;
    }
    case 1: {
        cout<<endl;
        cin.clear();
        break;
    }
    default:
        break;
    }
    return;
} // end of error_notice( )
