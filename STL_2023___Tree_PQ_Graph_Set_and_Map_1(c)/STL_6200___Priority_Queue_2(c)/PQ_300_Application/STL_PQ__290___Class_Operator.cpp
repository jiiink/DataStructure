#include <queue>
#include <iostream>
using namespace std;

class Person {
public:
    Person(int age) : age(age){ }
    int age;
};

bool operator<(const Person& a, const Person& b) {
    return a.age < b.age;
}

int main() {
    priority_queue <Person> Q;
    for (int i : {11, 10, 22, 39, 43, 58, 14, 67, 5, 26}) // ΑυΏδ
    // range-based for loop
        Q.push(Person(i));

    while (!Q.empty()) {
        Person p = Q.top();
        Q.pop();
        cout << "\n" << p.age << " ";
    }
    return 0;
}
