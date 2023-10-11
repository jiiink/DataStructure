// 반복자. 아주 중요한 개념이다. STL 자료구조에 접근하는 유일한 방법
// 이제 여러분은 그 시작과 끝 위치, 갯수를 기억하고 있을 필요가 없다.
// myX.begin(), myX.end()

#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


int main() {
    vector <int> myvec { 10, 11, 12, 13, 14, 15, 16};      // list container for character elements
    vector <int>::iterator    it1, it2, it3 ;

    it1 = myvec.begin()+2 ;
    cout << "\n *it1= " << *it1 ;
    cout << "\n myvec.back()= " <<  myvec.back() ;

    myvec.insert( myvec.begin(), -99) ;
    cout << "\n 삽입후 *it1= " << *it1 ;
    it2 = myvec.begin()+2 ;
    allout(" myvec[] 상황 = ", myvec ) ;

    cout << "\n push_back(455) 이전  *it2= " << *it2 ;
    myvec.push_back( 455) ;

    allout(" myvec[] 상황 = ", myvec ) ;
    cout << "\n push_back(455) 이후  *it2= " << *it2 ;

    cout << "\n myvec.back()= " <<  myvec.back() ;

    cout << "\n\n List의 경우 iterator의 특성 \n\n" ;
    list <int> mylist = { 31, 32, 33, 34, 35 };
    list <int>::iterator itlst ;

    itlst = mylist.begin() ;
    itlst++ ; itlst++ ;
    cout << "\n *itlst의 값 =" << *itlst ;
    mylist.insert( mylist.begin(), -10) ;
    mylist.insert( mylist.begin(), -20) ;
    allout(" mylist[]의 내용", mylist ) ;
    cout << "\n insert( )후의 *itlst의 값 =" << *itlst ;


} // end of main( )
