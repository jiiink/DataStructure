#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

int main() {

    list< int > mylist;


    for( int i = 0; i < 5; ++i ) {     // 추가하기
         mylist.push_front( i );
    }

    allout("1. mylist{}=", mylist ) ;

    for( int i = 0; i < 5; ++i ) {     // 추가하기
        mylist.push_back( -i );
    }
    allout("2. mylist{}=", mylist ) ;


     mylist.pop_front( );
    allout("3. mylist{}=", mylist ) ;

    return 0;
}




