#include <iostream>
#include <vector>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std ;


int main () {
    vector<int> myv ;

    for(int i =1 ; i<= 520 ; i++ ) {
        myv.push_back(i) ;
    }
    cout << "\n Befre myv.capacity( )= " << myv.capacity() ;
    cout << "\n Befre myv.size( )    = " << myv.size() ;

    cout << "\n\n We do myv.shrink_to_fit()\n" ;
    //  capacity( )를 실제 size( )와 같도록 맞춤,

    myv.shrink_to_fit() ;
    cout << "\n After myv.capacity( )= " << myv.capacity() ;
    cout << "\n After myv.size( )    = " << myv.size() ;
    return 0;
}
