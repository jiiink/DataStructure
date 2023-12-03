#include <bits/stdc++.h>
using namespace std;

struct Binary_tree{
    int data;
    Binary_tree* left;
    Binary_tree* right;
};

int main() {

    Binary_tree* root  = new Binary_tree;     // 노드를 만듭니다.
    Binary_tree* five  = new Binary_tree;
    Binary_tree* eight = new Binary_tree;

    root-> data = 3;       //Set data
    five-> data = 5;
    eight->data = 8;

    root->left  = eight;   // root의 왼쪽에 "8"을 매답니다.
    root->right = five;

    five->left  = NULL;
    five->right = NULL;


    eight->left  = nullptr;   // c++ 11에서는 nullptr을 사용할 수 있슴,
    eight->right = nullptr;

}  // end of main()


