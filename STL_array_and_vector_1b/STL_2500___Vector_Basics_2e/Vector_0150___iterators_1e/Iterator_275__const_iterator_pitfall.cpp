#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector <string> Box { "Banana", "Apple", "Fox", "Wine", "팽길탄" };

    vector <string>::iterator        Biter ;
    vector <string>::const_iterator CBiter;   // iterator가 가르키는 값이 const !

    CBiter = Box.begin()+2 ;

    for ( Biter = Box.begin(); Biter != Box.end(); Biter++)     {
        *Biter = *Biter + "_end" ;
        cout << *Biter << endl;
    }

    cout << "\n* 1. CBiter= " << *CBiter ;

    CBiter = Box.end( )-1 ; // error가 날까요? 안남.
    cout << "\n* 2. CBiter= " << *CBiter ;

    //*CBiter = "Cool" ; // 결과를 바꾸면 안됨. iterator 자체는 바꿀수 있다.

// const_iterator.cpp|24|error: passing 'const std::__cxx11::basic_string<char>' as 'this' argument discards qualifiers [-fpermissive]|

} // end of main( )
