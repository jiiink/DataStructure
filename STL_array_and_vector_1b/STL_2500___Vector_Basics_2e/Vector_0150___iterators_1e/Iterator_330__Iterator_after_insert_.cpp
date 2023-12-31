// 반복자. 아주 중요한 개념이다. STL 자료구조에 접근하는 유일한 방법
// 이제 여러분은 그 시작과 끝 위치, 갯수를 기억하고 있을 필요가 없다.
// myX.begin(), myX.end()
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n ";for(auto w:X)cout<<w<<","
#include <bits/stdc++.h>
using namespace std;


int main() {
    vector <int> myvec { 10, 11, 12, 13, 14, 15, 16};      // list container for character elements
    vector <int>::iterator    it1, it2, it3 ;

    it1 = myvec.begin()+2 ;
    cout << "\n 삽입전 *it1= " << *it1 ;
    cout << "\n myvec.back()= " <<  myvec.back() ;

    myvec.push_back(-99) ;
    // myvec.insert( myvec.begin(), -99) ;
    allout( "\n myvec[]= ", myvec) ;
    cout << "\n 삽입후 *it1= " << *it1 ;

    cout << "\n myvec.back()= " <<  myvec.back() ;

} // end of main( )
