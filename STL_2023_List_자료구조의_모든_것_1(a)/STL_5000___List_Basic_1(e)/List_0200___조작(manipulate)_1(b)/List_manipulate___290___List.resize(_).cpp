#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std ;

int main () {
  list<int> mylist {10, 11, 12, 13, 14, 15, 16, 17 };

  cout << "\n 1. 현재 리스트의 크기 = " << mylist.size() ;
  allout("처음 mylist[] = ", mylist ) ;
  mylist.resize(5);
  cout << "\n 2. 현재 리스트의 크기 = " << mylist.size() ;
  allout("After resize(5)= ", mylist ) ;
  mylist.resize(10,100);

  allout("After resize(10,100)= ", mylist ) ;\
  cout << "\n 3. 현재 리스트의 크기 = " << mylist.size() ;

  mylist.resize(12);
  allout("After resize(12)= ", mylist ) ;
  cout << "\n 4. 현재 리스트의 크기 = " << mylist.size() ;



  return 0;
}

