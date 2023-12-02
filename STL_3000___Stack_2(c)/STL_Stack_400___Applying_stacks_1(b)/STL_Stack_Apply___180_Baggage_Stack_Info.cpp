#include <bits/stdc++.h>
using namespace std;

struct Box {
  string name ;
  int weight ;
  stack <int> con ;
  } ;

int main() {
     int i, baggage[15] = { 12, 22, 13, 4, 15, 6, 7, 18, 9, 5, 21, 22, 3, 4, 15 } ;
     int w ;
     Box my, your ;
     queue < Box > Cargo ;
     w = 0 ;
     for(i=0 ; i < 15 ; i++) {
        w += baggage[i] ;
        my.con.push( baggage[i] ) ;
        if( w > 30 ) {
            my.weight = w ;
            Cargo.push( my ) ;
            w = 0 ;
            my = Box() ;
        }
     }

    cout << "Con에 있는 원소 모두 출력하기: \n" ;
    while (!Cargo.empty()) {
        your = Cargo.front() ;
        cout << "Weight = " << your.weight << endl;
        Cargo.pop();
    } // end of while( )

     return 0;

} // end of main()
