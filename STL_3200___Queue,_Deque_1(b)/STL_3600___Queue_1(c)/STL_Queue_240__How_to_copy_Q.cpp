// queue::emplace
#include <iostream>       // cin, cout
#include <queue>          // queue
#include <string>         // string, getline(string)
using namespace std ;

void Pqueue( string msg, queue<string> X ){
    cout << "\n Queue " << msg << ": ";
    while( !X.empty()) {
        cout << X.front() <<   ", "   ;
        X.pop() ;
    }

}

int main () {

  queue<string> foo,bar ;
  foo.push ("Com" ); foo.push("YouTube" ); foo.push("Box" );
  foo.push ("Dali"); foo.push("TehmTube"); foo.push("Beer");

  Pqueue("Copy 전 foo[]=", foo ) ;
  Pqueue("Copy 전 bar[]=", bar ) ;


  bar = foo ;
  Pqueue("Copy 후 foo[]=", foo ) ;
  bar.push("Monkey") ;
  Pqueue("Copy 후 bar[]=", bar ) ;
  return 0;
}
