#include <iostream>
#include <vector>

#define myout(msg,x)  cout<< "\n" << msg << ":: "; for(auto s : x) cout << " " << s ;

using namespace std;

int main() {
    vector <int> vex { 11, 22, 33, 44, 55, 66 };

    myout("Step 1", vex ) ;

    vex.resize(3) ;
    myout("Step 2", vex ) ;
    cout << "\n size of vex[]: " << vex.size() ;

    vex.push_back(70) ;
    myout("Step 3", vex ) ;

    // 2021 9월 이후에 추가함.
    vex.resize(10) ;
    myout("Step 4", vex ) ;
    cout << "\n size of vex[]: " << vex.size() ;

    vex.push_back( -99) ;
    myout("Step 5", vex ) ;
} // end of main( )
