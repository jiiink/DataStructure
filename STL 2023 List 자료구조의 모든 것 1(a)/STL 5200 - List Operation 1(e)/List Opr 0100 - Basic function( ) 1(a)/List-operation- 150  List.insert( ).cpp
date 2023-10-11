
#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main () {

  list<int> mylist = { 12, 34, 56, 78, 90, 89, 90 };
  list<int>::iterator it;


  it = mylist.begin();
  allout ("원본 리스트 ", mylist) ;
  ++it;      // 다음 원소로 넘어감.

  mylist.insert (it,100);
  allout ("새 원소 100 삽입 후 리스트 \n ", mylist) ;

  mylist.push_back( 333 ) ;
  allout ("push_back 이후 \n ", mylist) ;
  mylist.push_front( 555 ) ;
  allout ("push_front 이후 \n ", mylist) ;


  mylist.insert (it,2,200);
  allout ("복수걔 원소 삽입 : 200을 2개  삽입 후 리스트 \n ", mylist) ;
  --it;       // it points now to the second 20

  vector<int> myvector (5,-99);
  mylist.insert (it,myvector.begin(),myvector.end());
  allout ("vector  삽입 후 리스트 \n ", mylist) ;



  return 0;
}
