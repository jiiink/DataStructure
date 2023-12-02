// queue::emplace
#include <iostream>       // cin, cout
#include <queue>          // queue
#include <string>         // string, getline(string)
using namespace std ;

void Pqueue( string msg, queue<int> X ){
    cout << "\n Queue " << msg << ":";
    while( !X.empty()) {
        cout <<   "-- " << X.front()  ;
        X.pop() ;
    }

}

int main () {

  queue<int> foo,bar, temp ;
  foo.push (10); foo.push(20); foo.push(30);
  bar.push (111); bar.push(222);

  Pqueue("바꾸기전 foo", foo ) ;
  Pqueue("바꾸기전 foo", bar ) ;

  foo.swap(bar);


  Pqueue("바꾼 후 foo", foo ) ;
  Pqueue("바꾼 후 bar", bar ) ;

  cout << "size of foo: " << foo.size() << '\n';
  cout << "size of bar: " << bar.size() << '\n';

  temp = bar ;
  Pqueue(" 지정후 temp =", temp ) ;
  return 0;
}
