#include <iostream>
#include <stack>
#include <set>
#include <vector>
// #include <algorithm>
using namespace std;
#define allout(m) for(auto& i : m) cout << i << " "; cout << endl;
// score 83

multiset<int> items;
int K;
int total = 0;
stack<int> shoppingList;
set< stack<int> > completeList;
vector< vector<int> > completeVector;
int maxIndex = 0;

void input() {
    int N;
    cin >> N >> K;
    while (N--) {
        int item;
        cin >> item;
        items.insert(item);
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

void process(multiset<int> items) {
    
    for (auto it=items.begin(); it!=items.end(); ++it) {

        shoppingList.push(*it);
        totalSum(shoppingList);

        if (total == K) {
            completeList.insert(shoppingList);
            shoppingList.pop();
        } else if (total < K) {
            multiset<int> copy = items;
            multiset<int>::iterator copy_it = copy.begin();
            
            while (*copy_it != *it) {
                copy_it++;
            }
            copy.erase(copy.begin(), ++copy_it);

            
            process(copy);

        } else if (total > K) shoppingList.pop();
        
    }
    if (shoppingList.empty()) return;
    else shoppingList.pop();
    
}



void output(set<stack<int>>::iterator it) {
   
    if (completeList.empty()) {
        cout << "0\n";
        return;
    } 
    auto maxStack = *it;
    vector<int> v;
    while (!maxStack.empty()) {
        v.push_back(maxStack.top());
        maxStack.pop();
    }
  
    while (!v.empty()) {
        cout << v.back() << endl;
        v.pop_back();
    }
}

void findMaxStack() {
    int maxV = 0;
    auto copyCL = completeList;
   
    auto maxIT = completeList.begin();
    for (auto it=completeList.begin(); it!=completeList.end(); ++it) {
        if ((*it).top() > maxV) {
            maxV = (*it).top();
            
            maxIT = it;
        } else if ((*it).top() == maxV) {
            
            auto maxStack = *maxIT;
            auto currentStack = *it;
            maxStack.pop();
            currentStack.pop();
            if (maxStack.top() < currentStack.top()) maxIT = it;
        }
    }
    output(maxIT);
}

int main() {
    input();

    process(items);
    findMaxStack();

}