// 거꾸로 돌아가는 방법

#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {


  list< string > kword ({"부", "산", "돼", "지", "국", "밥", "집" });
  cout << "\n kword의 첫문자[]= " << *kword.begin() ;
  cout << "\n kword의 끝문자[]= " << *kword.rbegin() ;

  return 0;
}
