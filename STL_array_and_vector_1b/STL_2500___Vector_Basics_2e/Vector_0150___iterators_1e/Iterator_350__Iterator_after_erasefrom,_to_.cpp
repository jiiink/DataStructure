// 반복자. 아주 중요한 개념이다. STL 자료구조에 접근하는 유일한 방법
// 이제 여러분은 그 시작과 끝 위치, 갯수를 기억하고 있을 필요가 없다.
// myX.begin(), myX.end()
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<","
#include <bits/stdc++.h>
using namespace std;


int main() {
    vector <int> myvec { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector <int>::iterator    it1, it2, it3 ;

    it1 = myvec.begin()+1 ;
    it2 = myvec.begin()+3 ;
    it3 = myvec.end()  -2 ;
    allout( "\n  삭제 전 myvec[]= ", myvec) ;
    cout << "\n  삭제 전 *it1= " << *it1 ;
    cout << "\n  삭제 전 *it2= " << *it2 ;
    cout << "\n  삭제 전 *it3= " << *it3 ;
    myvec.erase(it1, it2) ;

    allout( "\n  삭제 후 myvec[]= ", myvec) ;
    cout << "\n  myvec.erase(it1, it2) 삭제 후 *it1= " << *it1 ;
    cout << "\n  myvec.erase(it1, it2) 삭제 후 *it2= " << *it2 ;
    cout << "\n  myvec.erase(it1, it2) 삭제 후 *it3= " << *it3 ;

    myvec.insert(it2, 999) ;
    allout( "\n  삽입 후 myvec[]= ", myvec) ;
    cout << "\n  myvec.insert(it2, 999) ; 삽입 후 *it1= " << *it1 ;
    cout << "\n  myvec.insert(it2, 999) ; 삽입 후 *it2= " << *it2 ;
    cout << "\n  myvec.insert(it2, 999) ; 삽입 후 *it3= " << *it3 ;

} // end of main( )
