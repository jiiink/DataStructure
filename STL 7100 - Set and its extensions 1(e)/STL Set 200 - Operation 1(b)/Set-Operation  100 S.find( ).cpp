
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {

    cout << "\n 하나의 집합을 만듭니다. \n";
    string a[] = {"Tom", "Dick", "Harry", "Alice"};
    set<string> setOfNames(a, a+4);

    cout << "\n Here are the " << setOfNames.size() << " names in the set."
        "\n Compare their order here with their order in the array:\n";

    set<string>::iterator p = setOfNames.begin();
    while (p != setOfNames.end()) cout << *p++ << " ";

    string nameToFind;
    cout << "\n 찾아야 할 이름(Name)이나 enter(중지)를 입력하시오. ";
    getline(cin, nameToFind);

    while (nameToFind != "") {
        p = setOfNames.find(nameToFind);
        if (p != setOfNames.end())
            cout << " 찼았음 " << nameToFind << ".\n";
        else
            cout << nameToFind << " 이름이 없습니다. \n";
        cout << "\n 다시 찾아야 할 이름(Name)을 입력허시오. : ";
        getline(cin, nameToFind);
    }


} // end of main()

