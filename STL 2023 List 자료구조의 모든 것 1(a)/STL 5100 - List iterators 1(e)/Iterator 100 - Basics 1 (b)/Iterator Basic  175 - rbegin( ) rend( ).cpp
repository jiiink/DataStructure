// 거꾸로 돌아가는 방법

#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {
  list< string > mylist ({"K", "O", "R", "E", "A", "N" });
  list< string >::reverse_iterator rit ;

  cout << "mylist forwards:";
  for ( auto fit=mylist.begin(); fit!=mylist.end(); ++fit)
    cout << ' ' << *fit;



  cout << "\n\nmylist backwards:";
  for ( rit=mylist.rbegin(); rit!=mylist.rend(); ++rit)
    cout << ' ' << *rit;

  cout << '\n';

  cout << "\n 첫문자 = " << *mylist.begin() ;
  auto wit = mylist.end() ;

  cout << "\n 끝 문자 = " << *(--wit) ;
  cout << "\n 역으로 첫 문자.= " << *mylist.rbegin() ;

  auto zit = mylist.rend() ;
  cout << "\n 역으로 끝문자., = " << *(--zit) ;


  list< string > kword ({"부", "산", "돼", "지", "국", "밥", "집" });
  cout << "\n kword의 첫문자[]= " << *kword.begin() ;
  cout << "\n kword의 끝문자[]= " << *kword.rbegin() ;
  return 0;
}
