// Written by Zoh Q.

#include <bits/stdc++.h>
using namespace std;

int num[]={ 1,  2,  3,  4,  5,  6,  7,  8,  9, 10, \
           31, 32, 33, 34, 35, 36, 37, 38, 39, 40} ;

int main() {

    vector<int> iv (num   , num+ 5) ;
    vector<int> iw (num   , num+18) ;
    vector<int> iz (num+13, num+15) ;

    vector< vector<int> > viv ; // vector in vector

    viv.push_back( iv ) ;
    viv.push_back( iw ) ;
    viv.push_back( iz ) ;

    cout << "Size of iw  = " << iw.size() << endl ;
    cout << "Size of viv = " << viv.size()<< endl ;

} // end of main()
