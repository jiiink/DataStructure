#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Person {
    int sex;      // 1=male, 0=female
    string name;  // 이름
    int age;      // 나이
    int atime;    // 도착시간

    // 비교 연산자 오버로딩
    bool operator<(const Person& other) const {
        if (sex != other.sex) {
            return sex > other.sex;  // 여성이 우선, 그 다음은 남성
        } else {
            if (age != other.age) {
                return age < other.age;  // 나이 많은 순서
            } else {
                return atime > other.atime;  // 도착시간 빠른 순서
            }
        }
        // if (this == nullptr) {
        //     return sex == 0;
        // }

        // if (sex == 0) {
        //     return sex != other.sex;
        // }
    }
    // bool operator()(const Person& lhs, const Person& rhs) const {
    //     if (lhs.sex != rhs.sex) {
    //         return lhs.sex > rhs.sex;  // 여성이 우선, 그 다음은 남성
    //     } else {
    //         if (lhs.age != rhs.age) {
    //             return lhs.age < rhs.age;  // 나이 많은 순서
    //         } else {
    //             return lhs.atime > rhs.atime;  // 도착시간 빠른 순서
    //         }
    //     }
    // }
};

int main() {
    priority_queue<Person> waitingRoom;

    // 대기자 정보를 초기화하여 대기실에 추가하는 예시
    // 여러분은 이 부분을 실제 입력 처리로 대체해야 합니다.
    waitingRoom.push({0, "Alice", 25, 1});
    waitingRoom.push({1, "Bob", 30, 2});
    waitingRoom.push({0, "Cathy", 10, 3});
    waitingRoom.push({0, "Rose", 12, 4});
    waitingRoom.push({1, "Chris", 30, 5});
    waitingRoom.push({0, "Jen", 12, 6});
    waitingRoom.push({1, "Son", 29, 7});
    waitingRoom.push({1, "KDB", 32, 8});

    // ... 추가적인 대기자 정보 초기화

    // 대기자 호출 및 처리 루프
    while (!waitingRoom.empty()) {
        Person nextPerson = waitingRoom.top();
        waitingRoom.pop();

        // 대기자 호출에 대한 처리 (예: 출력)
        cout << "Call: " << nextPerson.name << " (Age: " << nextPerson.age << ", Sex: " << (nextPerson.sex ? "Male" : "Female") << ")" << endl;
    }

    // 모든 작업 종료
    return 0;
}
