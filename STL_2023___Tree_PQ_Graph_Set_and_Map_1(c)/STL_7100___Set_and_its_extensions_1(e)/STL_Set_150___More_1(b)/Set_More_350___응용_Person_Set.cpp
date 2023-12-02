
#include <iostream>
#include <string>
#include <set>
using namespace std;

class Person {
public:
    Person     (
        string name, //in
        int age      //in
    )
    {
        this->name = name;
        this->age = age;
    }
    string getName() { return name; }
    int getAge()     { return age; }
    string getName() const { return name; }
    int getAge() const     { return age; }
    bool operator<
    (
        const Person& other //in
    ) const
    {
        return name < other.name;
    }

private:
    string name;
    int age;
};


int main() {

    //Create an array of Person
    Person a[] =     {
        Person("William", 23),
        Person("John", 20),
        Person("Alice", 18),
        Person("Peter", 24),
        Person("Bob", 17)     };

    set<Person> s(a, a+5);
    cout << "\n Press Enter to continue ... ";  cin.ignore(80, '\n');


    cout << "\n Person objects에 저장된 정보 :\n";
    set<Person>::iterator p = s.begin();
    while (p != s.end())     {
        cout << p->getName() << "의 나이는 " << p->getAge() << " 세 입니다. \n";
        ++p;
    }

} // end of main()
