#include <bits/stdc++.h>
using namespace std;


map<string, vector<string> > funcs;
stack<string> callStack;
vector<string> results;
int k[2];

void input() {
    int n;
    cin >> n >> k[0] >> k[1];

    while (n--) {
        vector<string> funcBody;
        string statement;
        string key;
        cin >> key;
        while (true) {
            cin >> statement;
            if (statement == "$") break;

            funcBody.push_back(statement);
        }
        funcs[key] = funcBody;
    }
}


void checkDeadLock(string call) { // if there is same function call in the callStack, then DEADLOCK
    auto copy = callStack;
    while (!copy.empty()) { 
        if (call == copy.top()) {
            cout << "DEADLOCK\n";
            exit(0);
        }
        copy.pop();
    }
}

void process(string key, vector<string> body) {
    callStack.push(key);

    for (auto& statement : body) {
        if (statement >= "A" && statement <= "Z") {
            checkDeadLock(statement);

            process(statement, funcs[statement]);

        } else {
            string result = key + "-" + statement;
            results.push_back(result);
        }
    }

    callStack.pop();
}

void output() {
    for (auto i : k) {
        if (abs(i) > results.size() || i == 0) {
            cout << "NONE\n";
        } else if (i < 0) {
            i = results.size() + i;
            cout << results[i] << endl;
        } else {
            cout << results[i-1] << endl;
        }
    }
}


int main() {
    input();

    process("M", funcs["M"]);
    
    output();
    return 0;
}