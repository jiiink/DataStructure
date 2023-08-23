#include <bits/stdc++.h>
using namespace std;


int main() {

    vector<int> intv  {31, 32, 33, 44} ;
    vector<int> myv ;

    intv.push_back( 500  ) ;



    //  초기화를 하면 auto completion이 동작하지 않는다.
    // 새로운 변수를 만들면 member function이 pop_up으로 올라온다.

    for(auto w : intv ) cout << w << " : " ;

    // Code Completion의 options에서 2,3,4,5,6을 체크해야 한다.



} // end of main()
