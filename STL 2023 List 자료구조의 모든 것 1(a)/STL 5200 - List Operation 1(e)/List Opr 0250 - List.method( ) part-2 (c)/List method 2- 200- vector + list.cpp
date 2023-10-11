#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std ;

int main() {

     vector < string > myvec = { "banana" , "apple", "tomato", "rose", "water", "peanut", "coffee"};
     list   < string > mylist = { "cat" , "dog", "tiger", "bear", "dragon", "pig", "horse" };
     vector < string >::iterator itv ;
     list   < string >::iterator itl ;

     vector < vector <string> >   vv ;
     vector < list   <string> >   vl ; // vector of list[]
     list   < list   <string> >   ll ;
     list   < vector <string> >   lv ;

     vv.push_back( myvec  ) ;
     vl.push_back( mylist ) ;
     ll.push_back( mylist ) ;
     lv.push_back( myvec  ) ;



} // end of main( )
