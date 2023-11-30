#include <iostream>
using namespace std ;

int main() {
    int UserMode = 4;
    auto* pUserMode = &UserMode;
    cout << "pUserMode : Value = " << *pUserMode << ", address : " << pUserMode << endl;

    auto& refUserMode = UserMode;
    refUserMode = 5;
    cout << "UserMode : Value = " << UserMode << " | refUserMode : Value - " << refUserMode << endl;

    return 0;
}
