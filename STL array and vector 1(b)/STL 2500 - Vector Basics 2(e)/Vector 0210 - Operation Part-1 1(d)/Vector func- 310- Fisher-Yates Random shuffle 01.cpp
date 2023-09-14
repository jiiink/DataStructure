#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<", "
using namespace std;



void print(vector<int> const &v) {
    for (int i: v) {
        cout << i << ' ';
    }
}

int main() {
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    int n = v.size();

    for (int i = 0; i < n - 1; i++) {
        // generate a random number `j` such that `i <= j < n` and
        // swap the element present at index `j` with the element
        // present at current index `i`
        int j = i + rand() % (n - i);
        swap(v[i], v[j]);
    }

    print(v);

    return 0;
}
