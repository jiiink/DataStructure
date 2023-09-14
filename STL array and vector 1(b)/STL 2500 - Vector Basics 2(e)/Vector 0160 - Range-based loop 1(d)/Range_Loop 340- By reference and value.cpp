
#include <iostream>
#include <vector>
#include <map>
using namespace std ;

int main() {

    vector<int> v = {1, 3, 5, 7, 9};

    for (auto x : v) {
        cout << "\n x in v[] = " << x << ' ';
        x = x * 99 ;
    }

    cout << "\n\n 2번째 Loop for showing v[] after x*99 without reference" ;
    for (auto x : v) {
        cout << "\n x after x * 99 = " << x << ' ';
    }


    cout << "\n\n 3번째 Loop for showing v[] after x *= 100" ;
    for (auto & x : v){  // v 각 원소를 reference type으로 넘겨줌.
        x *= 100 ;
        cout << "\n x in v[] = " << x << ' ';
    }

    cout << "\n\n 4번째 Loop for showing v[]" ;
    for (auto x : v)
        cout << "\n x after auto & x : v = " << x << ' ';
}



