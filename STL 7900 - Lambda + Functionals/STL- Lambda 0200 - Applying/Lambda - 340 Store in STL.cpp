#include <bits/stdc++.h>
using namespace std;


int main() {
    vector< function<void (void)> > funcs;

    funcs.push_back([]() { cout << "Hello" << endl; });
    funcs.push_back([]() { cout << "lambda!" << endl; });

    for(auto& func : funcs) {
        func();
    }
}
