#include <initializer_list>
#include <type_traits>
#include <iostream>
#include <vector>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std ;



int main () {

    vector< vector<int> > vecvec { {1,2,3}, {41, 42, 43}, {77} };
    vector<        int  > ivec ;

    ivec.push_back( 1000 ) ;
    ivec.push_back( 1201 ) ;

    vecvec.insert ( vecvec.begin(), ivec );
    vecvec.emplace( vecvec.end(), initializer_list<int>{991, 992} ) ;
    // 냄비없이 재료만으로 insert( ) 가능

    allout( "vecvec.end()-1 = ", *(vecvec.end()-1));
    allout( "vecvec.end()-2 = ", *(vecvec.end()-2)) ;
    return 0;
}
