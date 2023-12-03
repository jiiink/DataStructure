
#include <iostream>
#include <vector>
#include <map>
using namespace std ;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<< " " << w<<", "

int main() {

    array<int,6> v = {11, 12, 13, 14, 15, 16};
    int to[6] =  {71, 72, 73, 74, 75, 76} ;

    for (auto x : v) { x +=100 ; }
    allout("\n local auto로 뽑을 때", v) ;

    for ( x : v) { x +=100 ; }   // 엄중한 경고를 받을 것이야...(auto x : &v )
    allout("\n 그냥 뽑을 때", v) ;

    for (auto &x : v) { x +=100 ; }   // 엄중한 경고를 받을 것이야...(auto x : &v )
    allout("\n 정상적으로 reference로 넘길 때 때", v) ;


} // end of main( )



