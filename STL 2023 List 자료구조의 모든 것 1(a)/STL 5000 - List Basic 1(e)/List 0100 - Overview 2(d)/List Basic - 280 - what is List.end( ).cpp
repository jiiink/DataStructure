#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main () {

    list<int> mylist   = { 17, 18, 19, 20, 21};
    list<int>::iterator bit, eit ;

    bit = mylist.begin( ) ;
    eit = mylist.end( ) ;

    allout( " mylist{}= ", mylist ) ;
    cout <<"\n 1. *bit = " << *bit  ;
    cout <<"\n 2. *eit = "  << *eit ;
    cout <<"\n 3. *(--eit) = "  <<  *(--eit) ;
    cout <<"\n 4. *(++bit) = "  << *(++bit) ;

  return 0;
}
