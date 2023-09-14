
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <list>
#include <iomanip>

using namespace std ;

int main() {
    string text = "Cool Summer?" ;


    vector <char>    vc (text.begin(), text.end()) ;


    int i = 0 ;
    for (auto w : vc ) {
            i++ ;
            cout << "\n -> " << setw(3)<<  i << " = " << w  ;
    }

}

