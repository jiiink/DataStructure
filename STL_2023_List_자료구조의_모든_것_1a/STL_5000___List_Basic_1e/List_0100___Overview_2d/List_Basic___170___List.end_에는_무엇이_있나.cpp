#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

int main( ){
    list < int > L = { 15, 17, 19, 23, 27 } ;

    auto it = L.begin() ;

    for(int i =0 ; i <= 30 ; i++){
        cout << "\n i= " << setw(3) << i << " *it= " <<  setw(3) << *it ;
        if( it == L.end()) cout << " <=== L.end()" ;
        it++ ; // list에서 다음 원소
    }


} // end of main( )
