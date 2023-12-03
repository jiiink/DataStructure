#include <bits/stdc++.h>
using namespace std;


int main() {
    vector < list<int> > lvec ; // 최종 목표 자료구조

    list<int> il ;
    list<int> la ( { 112, 113, 114, 115, 116, 117, 118 });
    list<int> lb ( { -300, -800, -345, 67, 99192, 456, -12 });
    list<int> lc ( { 52, 58, 57, 55, 87654321 });


    lvec.push_back( la ) ;
    lvec.push_back( lb ) ;
    lvec.push_back( lc ) ;

    cout << " lc.begin()= " << *lc.begin() << " lc.end()= " << *lc.rbegin() ;


    for(auto itt=lvec[1].begin() ; itt != lvec[1].end() ; itt++)
        cout << "\n : " << *itt ;

    cout << "\n First-Third element=" << *(lvec[1].begin()) ;
    cout << "\n Second-Last element=" << *(lvec[1].rbegin()) ;

} // end of main()
