#include <bits/stdc++.h>
using namespace std;


// vector< pair<int, int> > customers;

struct Customer {
    int id, item;
    Customer(int id, int item) : id(id), item(item) {}
};
struct Counter {
    int employee = 0;
    deque<Customer> line;
    int totalItem = 0;
};

vector<Customer> customers;
// vector< pair<vector<int>, int> > counters;
// vector< pair<vector<Customer>, int> > counters;
vector<Counter> counters;
vector<Customer> leaveCustomers;

int N, k, totalCustomer;

void input() {
    cin >> N >> k;
    totalCustomer = N;
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
    // int emptyCount = 0;
    while (leaveCustomers.size() != totalCustomer) {    
        for (auto it=counters.rbegin(); it!=counters.rend(); ++it) {
            // if ((*it).line.empty()) {
            //     emptyCount++;
            // }
            (*it).employee++;
            if ((*it).line.front().item == (*it).employee) {
                leaveCustomers.push_back((*it).line.front());
                (*it).line.pop_front();
                (*it).employee = 0;
            }
        }
    }
}


void printLeaveCustomer() {
    cout << "-------------\n";
    for (auto i : leaveCustomers) {
        cout << i.id << endl;
    }
}


int main() {
    input();
    // printCustomer();
    enterCounter();
    printCounter();
    leaveCounter();
    printLeaveCustomer();
    return 0;
}