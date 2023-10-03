// queue::emplace
#include <iostream>       // cin, cout
#include <queue>          // queue
#include <string>         // string, getline(string)
using namespace std ;

void Prt_DQ( string msg, deque<int> X ){
    cout << "\n Queue " << msg << ":  ";
    while( !X.empty()) {
        cout  << X.front() <<   ", "  ;
        X.pop_front() ;
    }

}

int main () {

   deque<int>  DQ1, DQ2 {11, 12, 13, 14, 15, 16, 17} ;


   Prt_DQ(" 1. DQ1= ", DQ1 ) ;
   Prt_DQ(" 2. DQ2= ", DQ2 ) ;
   DQ1 = DQ2 ;
   DQ2.push_front(90) ;
   Prt_DQ(" 3. DQ1= ", DQ1 ) ;
   Prt_DQ(" 4. DQ2= ", DQ2 ) ;

  return 0;
}
