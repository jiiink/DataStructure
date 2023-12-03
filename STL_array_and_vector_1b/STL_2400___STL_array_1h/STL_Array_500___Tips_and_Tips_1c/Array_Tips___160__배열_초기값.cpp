#include <bits/stdc++.h>

#define  pout(MSG,X)     cout<<"\n"<<MSG<< X << "\n" ;
#define  allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
#define  SKIP            cout<<"\n"
using namespace std ;

array<int,  5> Garray;

int main () {

    array<int,  5> myarray;
    array<float,5> farray;

    Garray[0]  = 2022 ;
    myarray[1] = 2022 ;
    farray[2]  = 2022.0 ;

    allout("> Garray[] = ",  Garray) ;
    allout("> myarray[] = ", myarray) ;
    allout("> farray[] = ",  farray) ;

    return 0;
}
