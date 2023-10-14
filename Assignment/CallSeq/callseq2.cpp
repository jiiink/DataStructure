#include <bits/stdc++.h>
using namespace std;


map<string, vector<string> > funcs;
stack<string> funcStack;
vector<string> statements;
int k[2];
int n, k1, k2;

void printS() {
    auto copy = funcStack;
    stack<string> for_print;
    while (!copy.empty()) {
        for_print.push(copy.top());
        copy.pop();
    } 
    while (!for_print.empty()) {
        cout << for_print.top() << " ";
        for_print.pop();
    }
    cout << endl;
    cout << "----------------\n";
}

void printQ() {
    for (auto& f : funcs) {
        cout << f.first << " : ";
        for (auto& s : f.second) {
            cout << s << " ";
        }
        cout << endl;
    }
    cout << "-------------\n";
}

void input() {
    cin >> n >> k[0] >> k[1];

    while (n--) {
        vector<string> func;
        string statement = "";
        string key;
        cin >> key;
        while (true) {
            cin >> statement;
            if (statement == "$") break;
            func.push_back(statement);
        }
        funcs[key] = func;
    }

}


void infiniteF(string s) {
    auto copy = funcStack;
    while (!copy.empty()) {
        if (s == copy.top()) {
            cout << "DEADLOCK\n";
            exit(1);
        }
        copy.pop();
    }
}

void process(string key, vector<string> q) {
    for (auto& s : q) {
        if (s >= "A" && s <= "Z") {
            infiniteF(s);

            funcStack.push(s);
            // printS();
            process(s, funcs[s]);
        } else {
            string msg = key + "-" + s;
            cout << msg << " ";
            statements.push_back(msg);
        }
    }
    funcStack.pop();

    // printS();
}

void output() {
    cout << endl;
    for (auto a : k) {
        if (a >= 0) {
            cout << statements[a-1] << endl;
        } else {
            a = statements.size() + a;
            cout << statements[a] << endl;
        }
    }
    // cout << statements[k1-1] << endl;
    // cout << statements[k2-1] << endl;
}


int main() {
    input();
    printQ();


    funcStack.push("M");
    // printS();
    process("M", funcs["M"]);
    
    output();
    return 0;
}