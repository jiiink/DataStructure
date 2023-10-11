// Written by Zoh Q.

#include <bits/stdc++.h>
using namespace std;


int main() {
    list<int> il ;
    list<int> la ( { 112, 113, 114, 115, 116, 117, 118 });
    list<int> lb ( { -300, -800, -345, 67, 99192, 456, -12 });
    list<int> lc ( { 52, 53, 54, 55, 56,57 });
    vector < list<int> > lvec ;

    lvec.push_back( la ) ;
    lvec.push_back( lb ) ;
    lvec.push_back( lc ) ;

    cout << " lc.begin()= " << *lc.begin() << " lc.rbegin()= " << *lc.rbegin() ;


    for(auto itt=lvec[1].begin() ; itt != lvec[1].end() ; itt++)
        cout << "\n : " << *itt ;

    cout << "\n First-Third element=" << *(lvec[1].begin()) ;
    cout << "\n Second-Last element=" << *(lvec[1].rbegin()) ;
    cout << "\n 0 end element=" << *(lvec[0].end()) ;
    cout << "\n 0 end element=" << *(lvec[2].end()) ;

} // end of main()
