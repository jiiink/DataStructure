#include <iostream>
#include <vector>

#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std ;


int main () {
    vector<int> myv { 1, 2, 3, 4, 5 } ;

    myout("step 1", myv) ;

    myv.reserve(20) ;  // 전체 공간을 10개로 늘인다.
    cout << "\n myv.capacity() = " <<  myv.capacity() ; ;
    cout << "\n myv.size()     = " <<  myv.size() ;
    myout("step 2", myv) ;

    myv.shrink_to_fit();
    myout(" > After step 3", myv) ;
    cout << "\n myv.capacity() = " <<  myv.capacity() ; ;
    cout << "\n myv.size()     = " <<  myv.size() ;
    return 0;
}
