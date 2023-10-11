#include <bits/stdc++.h>
using namespace std;

#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;

int main() {

  list<char> mylist = { 's', 'u', 'm', 'm', 'e', 'r', 't', 'i', 'm', 'e', 'z' } ;
  list<char>::iterator where, next ;

  myout("\n mylist[]= ", mylist ) ;
  where = mylist.begin() ;

  cout << "\n 1=> " << *where ;
  cout << "\n 2=> " << *(++where) ;

  advance(where,4) ;     // it++ 를 여러번 하지 않고 advance로 쭉 나아간다.

  cout << "\n 3=> " << *where ;
  cout << "\n 4=> " << *(++where) ;

  //  질문 advance에서 jump값 아주 크게 하기, 돌아 옵니까 ?
  //                   음수 jump값을 하면 거꾸로 돌아 옵니까 ?

  return 0 ;
}
