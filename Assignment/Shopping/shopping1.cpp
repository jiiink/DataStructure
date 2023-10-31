#include <bits/stdc++.h>
using namespace std;


// vector< pair<int, int> > customers;

struct Customer {
    int id, item;
    Customer(int id, int item) : id(id), item(item) {}
};
struct Counter {
    int employee = 0;
    vector<Customer> line;
    int totalItem = 0;
};

vector<Customer> customers;
// vector< pair<vector<int>, int> > counters;
// vector< pair<vector<Customer>, int> > counters;
vector< Counter > counters;



void input() {
    int N, k;
    cin >> N >> k;

    while (N--) {
        int id, item;
        cin >> id >> item;
        // pair<int, int> customer(id, item);
        Customer customer(id, item);
        customers.push_back(customer);
    }
    while (k--) {
        Counter counter;
        // cout << counter.second << endl;
        counters.push_back(counter);
    }
}

void printCustomer() {
    cout << "-------------\n";
    for (auto c : customers) {
        cout << c.id << " " << c.item << endl;
    }
}



int pickMinCounter() {
    int minIndex = 0;
    int min = 1000000;
    for (int i=0; i<counters.size(); i++) {
        if (counters[i].totalItem < min) {
            min = counters[i].totalItem;
            minIndex = i;
        }
    }
    return minIndex;
}


void enterCounter() {
    int minIndex;
    for (auto& customer : customers) {
        minIndex = pickMinCounter();
        counters[minIndex].line.push_back(customer);
        counters[minIndex].totalItem += customer.item;
    }
}


void printCounter() {
    cout << "---------------\n";
    for (auto& counter : counters) {
        cout << counter.totalItem << " : ";
        for (auto& c : counter.line) {
            cout << c.id << " ";
        }
        cout << endl;
    }
}



void leaveCounter() {
    // for (auto& c : counters) {
    //     c.employee++;
    // }
    for (auto it=counters.rbegin(); it!=counters.rend(); ++it) {
        (*it).employee++;
        if ((*it).line[0].item == (*it).employee) {

        }
    }
}


int main() {
    input();
    // printCustomer();
    enterCounter();
    printCounter();
    leaveCounter();
    return 0;
}