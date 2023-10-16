#include <iostream>
#include <stack>
#include <set>
#include <vector>
// #include <algorithm>
using namespace std;
// #define allout(m) for(auto& i : m) cout << i << " "; cout << endl;
// score 83

multiset<int> items;
int K;
int total = 0;
stack<int> shoppingList;
set< vector<int> > completeList;

void input() {
    int N;
    cin >> N >> K;
    while (N--) {
        int item;
        cin >> item;
        items.insert(item);
    }
}



void totalSum(vector<int> items) {
    total = 0;
    for (auto& i : items) {
        total += i;
    }
}

vector<int> stackToVector(stack<int> s) {
    vector<int> v;
    while (!s.empty()) {
        v.push_back(s.top());
        s.pop();
    }
    return v;
}

void process(multiset<int> items) {
    
    for (auto it=items.begin(); it!=items.end(); ++it) {

        shoppingList.push(*it);
        vector<int> v = stackToVector(shoppingList);
        totalSum(v);

        if (total == K) {
            
            completeList.insert(v);
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



void output(set<vector<int>>::iterator maxIT) {
   
    if (completeList.empty()) {
        cout << "0\n";
        return;
    } 
  
    for (auto it = (*maxIT).rbegin(); it != (*maxIT).rend(); it++) {
        cout << *it << endl;
    }
}

void findMaxStack() {
    int maxV = 0;
    // auto copyCL = completeList;
   
    auto maxIT = completeList.begin();
    for (auto it=completeList.begin(); it!=completeList.end(); ++it) {
        if ((*it).front() > maxV) {
            maxV = (*it).front();
            
            maxIT = it;
        } else if ((*it).front() == maxV) {
            int i = 1;
            while (i++) {
                if ((*maxIT)[i] != (*it)[i]) break;
                // i++;
            }
            if ((*maxIT)[i] < (*it)[i]) maxIT = it;
        }
    }
    output(maxIT);
}

int main() {
    input();

    process(items);
    findMaxStack();

}