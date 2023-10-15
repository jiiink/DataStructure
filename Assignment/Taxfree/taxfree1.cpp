#include <iostream>
#include <stack>
#include <set>
using namespace std;

// vector<int> items;
set<int> items;
int N, K;
int total = 0;
stack<int> shoppingList;

set< stack<int> > completeList;

void input() {
    cin >> N >> K;
    while (N--) {
        int item;
        cin >> item;
        items.insert(item);
    }
}



void printS(stack<int> s) {
    // cout << "\nprintS\n";
    auto copy = s;
    vector<int> v;
    while (!copy.empty()) {
        v.push_back(copy.top());
        copy.pop();
    }

    for (auto& i : v) {
        cout << i << " ";
    }
    cout << "\n---------------------\n";
}


void totalSum(stack<int> s) {
    cout << "\ntotalSum : ";
    total = 0;
    auto copy = s;
    while (!copy.empty()) {
        total += copy.top();
        copy.pop();
    }
    cout << total << endl;
    // return total;
}

void process(set<int> items) {
    cout << "\nprocess\n";
    for (auto& item : items) {
        // vector<int> complete;
        // cout << "copy : \n";
        auto copy = items;
        // printS(copy);

        shoppingList.push(item);
        printS(shoppingList);
        totalSum(shoppingList);
        // total += item;
        if (total == K) {
            // shoppingList.push(item);
            completeList.insert(shoppingList);
            shoppingList.pop();
            printS(shoppingList);
        } else if (total < K) {
            // shoppingList.push(item);
            // for (int i=0; i<copy.size(); i++) { // erase item from copy
            //     if (copy[i] == item) {
            //         copy.erase(copy.begin() + i);
            //     }
            // }
            // for (int i=0; i<copy.size(); i++) {
                
            // }
            auto copy_of_copy = copy;
            for (auto& i : copy_of_copy) {
                if (i <= item) {
                    copy.erase(i);
                }
            }
            // while (!copy.empty()) {

            // }
            // copy.erase(item);
            process(copy);
        } else if (total > K) {
            shoppingList.pop();
            printS(shoppingList);
        }
    }
    if (shoppingList.empty()) {
        return;
    } else {
        shoppingList.pop();
    }
    printS(shoppingList);
}



void output() {
    for (auto& c : completeList) {
        printS(c);
    }
}



int main() {
    input();


    cout << "\n--------------------\n";
    for (auto& i : items) {
        cout << i << " ";
    }
    cout << "\n---------------------\n";

    // sort(items);
    process(items);
    output();
}