
#include <bits/stdc++.h>
#define  allout(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main() {

  list<int> *plist ;

  list <int> la = {11, 22, 33, 44, 55, 66, 77 };
  allout("1. la[] = ", la) ;

  plist = &la ;

  cout << "\n  *(plist)->begin() = " << *(plist)->begin() ;
  cout << "\n *(plist)->begin()+2 = " << *(plist)->begin()+2 ;
  return 0;
}


