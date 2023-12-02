
#include <iostream>
using namespace std ;


int main() {

    int value = 5;        // normal integer
    int &ref = value;     // reference to variable value
    value = 6;            // value is now 6
    ref   = 7;            // value is now 7


    cout << "\n value1= " << value; // prints 7
    ++ref;
    cout << "\n value2= " << value; // prints 8 return 0;

    cout << "\n &value= " << &value;
    cout << "\n &ref=   " << &ref;

}


