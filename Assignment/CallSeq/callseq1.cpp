#include <bits/stdc++.h>
using namespace std;


vector< queue<string> > funcs;

void printQ() {
    for (auto& f : funcs) {
        queue<string> copy = f;
        while (!copy.empty()) {
            cout << copy.front() << " ";
            copy.pop();
        }
        cout << endl;
    }
}

void input() {
    int n, k1, k2;
    cin >> n >> k1 >> k2;

    while (n--) {
        queue<string> func;
        string statement = "";

        while (true) {
            cin >> statement;
            if (statement == "$") break;
            func.push(statement);
        }
        funcs.push_back(func);
    }

}

void process() {

}

void output() {

}


int main() {
    input();
    printQ();
    process();
    output();
    return 0;
}