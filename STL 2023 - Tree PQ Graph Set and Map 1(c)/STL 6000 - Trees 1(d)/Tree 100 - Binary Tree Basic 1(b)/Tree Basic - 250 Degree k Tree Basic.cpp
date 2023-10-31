#include <bits/stdc++.h>
using namespace std;

const int size = 6;
struct tree{   // 한 노드에서 자식 노드의 최대개수는 6개.
    int data;
    tree* ptr[size];
};

int main() {

    tree* root = new tree;      //Create elements

    root->data = 5;             //Set data
    root->ptr[0] = nullptr;     //Set pointers
    root->ptr[1] = nullptr;
    root->ptr[2] = nullptr;
    root->ptr[3] = nullptr;

    tree* mynode = new tree ;
    root->ptr[4] = mynode;
    root->ptr[4]->data = 9999 ;
    root->ptr[5] = nullptr;

} // end of main( )

