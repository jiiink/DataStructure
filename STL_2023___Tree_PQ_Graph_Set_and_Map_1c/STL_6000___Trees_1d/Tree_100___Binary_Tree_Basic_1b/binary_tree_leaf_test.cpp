#include <bits/stdc++.h>
using namespace std;

void get_leaf(vector<int> tree, vector<int> leaves) {
    // vector<int> leaves;
    
    for (int i=0; i<tree.size(); i++) {
        if (2*i+1 >= tree.size()) {
            leaves.push_back(tree[i]);
        }
    }
    // return leaves;
}

int main() {
    vector<int> tree = {7, 11, 2, 7, 1, 11, 9, 7, 0, 0, 0, 0, 0, 0, 9};  
    vector<int> leaves;
    // get_leaf(tree, leaves);
    for (int i=0; i<tree.size(); i++) {
        if (2*i+1 >= tree.size()) {
            leaves.push_back(tree[i]);
        }
    }
    for (auto leaf : leaves) {
        cout << leaf << " ";
    }
}