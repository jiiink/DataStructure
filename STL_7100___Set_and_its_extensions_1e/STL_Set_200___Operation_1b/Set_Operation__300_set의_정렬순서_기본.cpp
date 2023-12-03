
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

void printset( string heading,  set<char> myS ) {
    set<char>::iterator p = myS.begin();
    cout << "\n set: " << heading << " :  " ;
    while (p != myS.end()) cout  << *p++ << " ";
}

int main(){

    char a[] = { 'E', 'H', 'B', 'C', 'F', 'G', 'D', 'A'};
    set<char> s1(a,   a+3);
    set<char> s2(a+1, a+4);
    set<char> s3(a+2, a+5);
    set<char> s4(a,   a+4);
    set<char> s5(a+1, a+5);
    set<char> s6(a+2, a+6);
    set<char> s7(a+3, a+5);
    set<char> s8(a+1, a+7);

    vector <set<char>> vset { s1, s2, s3, s4, s5, s6, s7, s8 };

    for(auto w : vset) {
            printset( "vset=",  w ) ;
    }

    sort( vset.begin(), vset.end() ) ;

    cout << "\n vset{}ÀÇ sorting ÈÄ \n " ;
    for(auto w : vset) {
            printset( "vset=",  w ) ;
    }


} // end of main()
