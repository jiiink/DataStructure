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
vector<Customer> customers;
vector<Counter> counters;
vector<Customer> leaveCustomers; // 계산을 끝내고 나간 고객들을 순서대로 저장

int N, k;

void input() {
    cin >> N >> k;
    int n = N;
    while (n--) {
        int id, item;
        cin >> id >> item;
        Customer customer(id, item);
        customers.push_back(customer);
    }
    while (k--) {
        Counter counter;
        counters.push_back(counter);
    }
}

int pickMinCounter() { // 가장 최적의 계산대를 고른다.
    int minIndex = 0;
    int min = 1000000;
    for (int i=0; i<counters.size(); i++) { // 앞 쪽의 계산대부터 탐색
        if (counters[i].totalItem < min) {
            min = counters[i].totalItem;
            minIndex = i;
        }
    }
    return minIndex;
}


void enterCounter() { // 고객들을 계산대로 안내한다.
    int minIndex;
    for (auto& customer : customers) {
        minIndex = pickMinCounter();
        counters[minIndex].line.push_back(customer);
        counters[minIndex].totalItem += customer.item;
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