#include <bits/stdc++.h>
using namespace std;

stack<char> parenthesis;
vector<int> simple;
void input() {
    int N;
    cin >> N;
    char currentChar;

    for (int i=0; i<N; i++) {
        cin >> currentChar;
        if (currentChar == '(' || currentChar == ')') {
            if (currentChar == ')' && parenthesis.top() == '(') {
                parenthesis.pop();
            } else {
                parenthesis.push(currentChar);
            }
        } else {
            int num = currentChar - 0x30;
            simple.push_back(num);
        }
    }
}

bool validParenthesis() {
    if (!parenthesis.empty()) {
        // cout << -1 << endl;
        return 0;
    } else {
        // cout << 1 << endl;
        return 1;
    }
}

void simpleTest() {
    // int a = simple[0];
    // int b = simple[1];
    // int c = simple[2];
    // cout << a*c + b << " " << c << endl;
    
}

int main() {
    input();
    if (validParenthesis()) {
        simpleTest();
    } else {
        cout << -1 << endl;
    }

    // cout << 1 + 2/3;

    return 0;
}