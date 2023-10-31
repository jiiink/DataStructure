#include <bits/stdc++.h>
using namespace std;

// 사실랑 singly linked list

struct tree{
    string word;
    tree* next;
};

int main() {

    tree* root = new tree;  // 노드 만들기
    tree* by = new tree;
    tree* cmp = new tree;

    root->word = "hello";   //Set data
    by->word = "by";
    cmp->word = "cmp";


    root->next = by;      // 노드 매달기
    by->next = cmp;
    cmp->next = nullptr;


}

