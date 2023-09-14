// c++11의 편한 기능에는 auto type이 있다.
// auto로 선언한 뒤 특정 type을 넣어주면 그냥 그 type으로 형이 정해진다.
// 반드시 초기화할 때 선언을 해야 바로 compile time에 그 형이 결정된다.

#include <bits/stdc++.h>
using namespace std;
#define  myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;


int main() {

    vector <int> myvector { 11, 22, 33, 44, 55, 66 };      // list container for character elements
    auto it     = myvector.begin() ; ;
    auto yourvector = myvector ;


    cout << "Oh it works! " << *(it+3) << endl ;
    myout(" 1. myvector[]: ", myvector ) ;

    yourvector.push_back( -10) ;
    yourvector.push_back( 3 ) ;

    it = yourvector.end()-1 ;
    cout << "\n 2. yourvector의 끝 원소 = " << *(yourvector.end()-1) << endl ;
    cout << "\n 3. yourvector.end( ) 원소 = " << *yourvector.end() << endl ;
    myout(" 3. yourvector[]: ", yourvector ) ;

} // end of main( )
