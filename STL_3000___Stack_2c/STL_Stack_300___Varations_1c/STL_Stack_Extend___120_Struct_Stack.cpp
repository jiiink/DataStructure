#include <bits/stdc++.h>
using namespace std;


struct Mytype {
  string name ;
  int age ;
  int work[12] ;
  } t1, t2 ;

int main() {
     stack <Mytype> Mystack ;

     t1.name= "Good"  ;
     t1.age = 23 ;

     Mystack.push( t1 ) ;

     return 0;
}
