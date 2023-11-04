#include <bits/stdc++.h>
using namespace std;

struct Customer {
    int id, item;
    Customer(int id, int item) : id(id), item(item) {}
};
struct Counter {
    int employee = 0; // 물품을 계산하는 직원
    deque<Customer> line; // 고객들이 서는 줄
    int totalItem = 0; // 한 계산대에서 계산할 총 물건 수
};
list<Customer> customers;
list<Counter> counters;
list<Customer> leaveCustomers;

int N, k;

void input() {
    cin >> N >> k;
    int n = N;
    while (n--) {
        int id, item;
        cin >> id >> item;
        customers.emplace_back(id, item);
    }
    while (k--) {
        Counter counter;
        counters.push_back(counter);
    }
}

int pickMinCounter() {
    int minIndex = 0;
    int min = 1000000;
    // for (int i=0; i<counters.size(); i++) {
    //     if (counters[i].totalItem < min)
    // }
    int i = 0;
    for (auto& counter : counters) {
        if (counter.totalItem < min) {
            min = counter.totalItem;
            minIndex = i;
        }
        i++;
    }
    return minIndex;
}

void enterCounter() {
    int minIndex;
    for (auto& customer : customers) {
        minIndex = pickMinCounter();
        auto it = counters.begin();
        advance(it, minIndex);
        (*it).line.push_back(customer);
        (*it).totalItem += customer.item;
    }
}

void leaveCounter() { // 계산이 끝난 고객들을 저장한다.
    while (leaveCustomers.size() != N) { // 모든 고객의 계산이 끝날 때까지 수행
        for (auto it=counters.rbegin(); it!=counters.rend(); ++it) { // 뒤 쪽의 계산대부터 수행
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
    for (auto i : leaveCustomers) {
        cout << i.id << endl;
    }
}

int main() {
    input();
    enterCounter();
    leaveCounter();
    printLeaveCustomer();
    return 0;
}