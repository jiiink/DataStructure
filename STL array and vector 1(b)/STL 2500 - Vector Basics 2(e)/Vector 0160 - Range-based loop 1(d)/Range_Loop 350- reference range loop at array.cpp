
#include <iostream>
#include <vector>
#include <map>
using namespace std ;

int main() {

    array<int, 5> varr = {1, 3, 5, 7, 9};

    for (auto x : varr) {
        cout << "\n x in v[] = " << x << ' ';
        x = x * 99 ;
    }

    cout << "\n\n 2��° Loop for showing v[] after x*99 without reference" ;
    for (auto x : varr) {
        cout << "\n x after x * 99 = " << x << ' ';
    }


    cout << "\n\n 3��° Loop for showing v[] after x *= 100" ;
    for (auto & x : varr){  // v �� ���Ҹ� reference type���� �Ѱ���.
        x *= 100 ;
        //cout << "\n x in v[] = " << x << ' ';
    }

    cout << "\n\n 4��° Loop for showing v[]" ;
    for (auto x : varr)
        cout << "\n x after auto & x : v = " << x << ' ';
}


