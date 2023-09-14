
#include <iostream>
#include <vector>
using namespace std ;
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "


/*
emplace : vector에 하나를 추가한다. insert.
          insert와 다른 점은 그냥 쌩으로 넣어도 된다는 것이다.
          즉 다른 변수에 담아서 접시째로 넣지 않고 던지면
          지가 알아서 vartiable type을 만들어서, 형식에 맞추어서
          넣는다는 것이다.  그러니까 조금 편하는 것이지.

          int itemp = 100 ;
          v.insert( v.begin(), itemp ) ;    */

int main () {

    vector<int> myvector = {10,20,30};

    auto it = myvector.emplace ( myvector.begin()+1, -23 );
    myvector.emplace ( it, 200 );
    myvector.emplace ( myvector.end(), 70 );
    allout("1. myvector[ ]:", myvector) ;

    myvector.insert( myvector.begin()+1, 99 ) ;
    allout("1. myvector[ ]:", myvector) ;


    return 0;
}
