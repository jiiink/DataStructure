#include <iostream>
#include <stack>
#include <set>
#include <vector>
using namespace std;
// score 91
set<int> items;
int K;
int total = 0;
stack<int> shoppingList;
vector< vector<int> > vs;

vector< stack<int> > completeList;

void input() {
    int N;
    cin >> N >> K;
    while (N--) {
        int item;
        cin >> item;
        items.insert(item);
    }
}



void totalSum(stack<int> s) {
    // cout << "\ntotalSum : ";
    total = 0;
    auto copy = s;
    while (!copy.empty()) {
        total += copy.top();
        copy.pop();
    }
    // cout << total << endl;
}

void process(set<int> items) {
    // cout << "\nprocess\n";
    for (auto& item : items) {
        auto copy = items;
        
        shoppingList.push(item);
        // printS(shoppingList);
        totalSum(shoppingList);
        // total += item;
        if (total == K) {
            // shoppingList.push(item);
            completeList.push_back(shoppingList);
            shoppingList.pop();
            // printS(shoppingList);
        } else if (total < K) {

            auto copy_of_copy = copy;
            for (auto& i : copy_of_copy) {
                if (i <= item) {
                    copy.erase(i);
                }
            }
            
            process(copy);
        } else if (total > K) {
            shoppingList.pop();
            // printS(shoppingList);
        }
    }
    if (shoppingList.empty()) {
        return;
    } else {
        shoppingList.pop();
    }
    // printS(shoppingList);
}



void output(int index) {
    if (completeList.empty()) {
        cout << "0\n";
        return;
    } 
    // for (eteList[index]);
    stack<int> s;
    while (!completeList[index].empty()) {
        // p();
        s.push(completeList[index].top());
        completeList[index].pop();
    }
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}

void findMaxStack() {
    for (auto& c : completeList) {
        vector<int> v;
        auto copy = c;
        while (!copy.empty()) {
            v.push_back(copy.top());
            copy.pop();
        }
        vs.push_back(v);
    }

    int maxV, index;
    maxV = 0;
    index = 0;
    for (int i=0; i<vs.size(); i++) {
        if (vs[i].front() > maxV) {
            maxV = vs[i].front();
            index = i;
        } else if (vs[i].front() == maxV) {
            if (vs[index][vs[index].size()-2] > vs[i][vs[i].size()-2]) {
                index = index;
            } else {
                index = i;
            }
        }
    }
    output(index);
}






int main() {
    input();

    process(items);
    findMaxStack();
    // output();
}