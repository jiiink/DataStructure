// 반복자. 삽입이나 삭제하 이전 iterator의 값은 유지되지 않는다.
// 유지되는 것은 내장된 iterator begin(), end(), front( ), back()
// 2021년 10월 1일, CHO

#include <bits/stdc++.h>
using namespace std;


int main() {
    vector <int> myvec { 10, 11, 12, 13, 14, 15, 16};      // list container for character elements
    vector <int>::iterator    it1, it2, it3 ;

    it1 = myvec.begin()+2 ;
    cout << "\n *it1= " << *it1 ;
    cout << "\n myvec.back()= " <<  myvec.back() ;

    myvec.insert( myvec.begin(), -99) ;
    cout << "\n 삽입후 *it1= " << *it1 ;

    cout << "\n myvec.back()= " <<  myvec.back() ;

} // end of main( )

