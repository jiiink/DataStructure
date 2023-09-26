#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;

using namespace std;

bool myfun(int a, int b){
    return(a%100 < b%100) ;
}

int main() {

  list  <int> my = { 344, 25, 171, 625, 391,  9, 2, 516, 830, 511, 152, 866} ;


  myout("my[] Before:", my) ;
  my.sort( myfun ) ;
  myout("my[] After :", my) ;




  return 0;
}
