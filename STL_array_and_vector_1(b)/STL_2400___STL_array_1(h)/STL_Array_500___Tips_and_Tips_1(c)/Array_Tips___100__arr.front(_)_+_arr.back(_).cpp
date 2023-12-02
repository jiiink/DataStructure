#include <bits/stdc++.h>
using namespace std ;

int main() {
    array <string, 7> mymy = { {"HITE", "Cass", "Heineken", "IPA", "Soju", "Wine", "Water"}  };

    for(auto& s: mymy )  // ranged for loop is supported
        cout << s << ' ';

    cout << "\n test 01: " << mymy.front() ;
//    cout << "\n test 02: " << mymy.front()+3 ;
    cout << "\n test 03: " << mymy.back() ;
//    cout << "\n test 04: " << mymy.back()-2 ;

} // end of main( )
