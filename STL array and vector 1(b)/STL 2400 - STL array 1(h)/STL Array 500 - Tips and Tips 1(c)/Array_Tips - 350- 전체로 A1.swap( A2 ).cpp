// swap arrays
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std ;

int main () {
  array<int,5> first =  {11, 12, 13, 14, 15} ;
  array<int,5> second = {51, 52, 53, 54, 55};

  allout("> Before swap: first[] =", first ) ;
  allout("> Before swap: second[]=", second ) ;

  first.swap (second);

  allout("> After  swap: first[] =", first ) ;
  allout("> After  swap: second[]=", second ) ;

  swap( second[2], first[2]) ;
  allout("> After2 swap: first[] =", first ) ;
  allout("> After2 swap: second[]=", second ) ;

  return 0;
}
