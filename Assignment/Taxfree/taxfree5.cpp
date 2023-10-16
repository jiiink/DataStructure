#include <iostream>
#include <stack>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
// score 0

vector<int> items;
int K;
int total = 0;
stack<int> shoppingList;
vector< stack<int> > completeList;
vector< vector<int> > completeVector;
int maxIndex = 0;

void input() {
    int N;
    cin >> N >> K;
    while (N--) {
        int item;
        cin >> item;
        items.push_back(item);
    }
}



void totalSum(stack<int> items) {
    total = 0;
    auto temp = items;
    while (!temp.empty()) {
        total += temp.top();
        temp.pop();
    }
}

void process(vector<int> items) {
    // for (auto& item : items) {
    for (int i=0; i<items.size(); i++) {
        // auto copy = items;
        
        shoppingList.push(items[i]);
        totalSum(shoppingList);

        if (total == K) {
            completeList.push_back(shoppingList);
            shoppingList.pop();
        } else if (total < K) {
            vector<int> temp;
            for (int j=i+1; j<items.size(); j++) {
                temp.push_back(items[j]);
            }
            

            
            process(temp);

        } else if (total > K) shoppingList.pop();
        
    }
    if (shoppingList.empty()) return;
    else shoppingList.pop();
}



void output(int index) {
    cout << "output\n";

    for (auto& c : completeList) { // c is stack<int>
        vector<int> v;
        // auto copy = c;
        while (!c.empty()) {
            v.push_back(c.top());
            c.pop();
        }
        completeVector.push_back(v);
    }


    if (completeList.empty()) {
        cout << "0\n";
        return;
    } 
    while (!completeVector[index].empty()) {
        cout << completeVector[index].back() << endl;
        completeVector[index].pop_back();
    }
    // for (auto i=0; i<completeVector.size(); i++) {
    //     cout << completeVector[i]
    // }
}

void findMaxStack() {
    int maxV = 0;
    auto copyCL = completeList;
    for (int i=0; i<copyCL.size(); i++) {
        if (copyCL[i].top() > maxV) {
            maxV = copyCL[i].top();
            copyCL[i].pop();
            maxIndex = i;
        } else if (copyCL[i].top() == maxV) {
            copyCL[i].pop();
            if (copyCL[maxIndex].top() < copyCL[i].top()) maxIndex = i;
        }
    }
}





bool mysort(int a, int b) {
    return a <= b;
}

int main() {
    input();

    sort(items.begin(), items.end(), mysort);

    process(items);
    findMaxStack();
    output(maxIndex);
}