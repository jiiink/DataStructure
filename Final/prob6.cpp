#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Person {
    int sex;    // 1=male, 0=female
    string name; // 이름
    int age;    // 나이
    int atime;  // 도착시간
};
// Custom comparison function for the priority_queue
struct ComparePersons {
    bool operator()(const Person& p1, const Person& p2) const {
        // Compare based on sex
        if (p1.sex != p2.sex) {
            if (p1.sex == 0 && p2.sex == 1) {
                return p1.sex < p2.sex;
            } else {
                return p1.sex > p2.sex;
            }
            // return p1.sex > p2.sex; // Alternating priority
        }

        // If sex is the same, compare based on age
        if (p1.age != p2.age) {
            return p1.age < p2.age; // Older persons first
        }

        // If age is also the same, compare based on arrival time
        return p1.atime > p2.atime; // Earlier arrival time first
    }
};

int main() {
    priority_queue<Person, vector<Person>, ComparePersons> personQueue;

    // Example: Inserting persons into the priority_queue
    personQueue.push({1, "John", 30, 1});
    personQueue.push({0, "Alice", 25, 2});
    personQueue.push({1, "Bob", 35, 3});
    personQueue.push({0, "Eve", 28, 4});
    personQueue.push({1, "Chris", 35, 5});

    // Process persons in the priority_queue
    while (!personQueue.empty()) {
        Person nextPerson = personQueue.top();
        personQueue.pop();

        cout << "Sex: " << ((nextPerson.sex == 0) ? "female" : "male")
             << ", Name: " << nextPerson.name
             << ", Age: " << nextPerson.age
             << ", Arrival Time: " << nextPerson.atime << endl;
    }

    return 0;
}
