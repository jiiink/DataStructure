#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
#define myout2(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " (" << get<0>(s) << " "<< get<1>(s)<< ") ";
using namespace std;

bool myfun(int a, int b){
    return(a%100 < b%100) ;
}

bool yourfun( tuple<int,int> a, tuple<int,int> b){
    return( get<1>(a) > get<1>(b) ) ;
}


int main() {

  list  <int> my1 = { 344, 25, 171, 625, 391,  9, 2, 516, 830, 511, 152, 866} ;
  list  <tuple<int,int> > my2 = { make_tuple(3,4), make_tuple(5,7),  make_tuple(5,2), make_tuple(1,2),\
            make_tuple(4,1), make_tuple(3,3), make_tuple(0,2), make_tuple(2,4), make_tuple(4,4) } ;


  myout("my1[] Before:", my1) ;
  my1.sort( myfun ) ;
  myout("my1[] After :", my1) ;


  myout2("my2[] Before:", my2) ;
  my2.sort( yourfun ) ;
  myout2("my2[] After :", my2) ;


  return 0;
}
