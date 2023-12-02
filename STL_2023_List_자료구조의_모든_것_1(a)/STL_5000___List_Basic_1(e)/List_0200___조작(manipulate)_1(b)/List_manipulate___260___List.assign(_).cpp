#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

int main() {
    forward_list< int > flist;


    for( int i = 0; i < 5; ++i ) {     // 추가하기
        flist.push_front( i*10 );
    }


    cout << "flist의 첫번 째 위치 값: " << flist.front() << endl;

    allout("1. flist{}=", flist ) ;

    forward_list< int > flist2;

    flist2.assign( 7, -11);               // 같은 값의 11을 3개를 만들어 넣어보자.

    allout("2. flist2{}=", flist2 ) ;


    forward_list< int > flist3;
    auto ihead = flist.begin() ;
    auto itail = flist.end() ;
    ihead++ ;
    flist3.assign( ihead, itail ); // 특정 리스트의 일부를 잘라 복사해서 다른 곳으로 옮김

    allout("3. flist3{}=", flist3 ) ;

    return 0;
}




