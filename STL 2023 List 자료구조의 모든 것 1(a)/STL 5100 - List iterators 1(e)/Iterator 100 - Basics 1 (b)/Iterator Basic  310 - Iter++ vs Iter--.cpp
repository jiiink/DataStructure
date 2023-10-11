#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


int main() {

  list<char> mylist = { 'S', 'u', 'm', 'm', 'e', 'r', '$' } ;
  list<char>::iterator where, next ;
  where = find(mylist.begin(), mylist.end(), 'e');

  cout << "리스트의 위치변수 iterator 이해하기 \n" << endl;
  cout << " *where = " << (*where) ;
  cout <<  "\n begin() 원소 = " <<  *mylist.begin() ;
  cout <<  "\n begin() 다음 원소 = " << *(++mylist.begin()) ;
  cout <<  "\n end() 원소 = " <<  *mylist.end();  // 이것은 실제 원소가 아님. 망통 원소
  cout <<  "\n T.end( ) 바로 앞 원소 = " <<  *(--mylist.end());

  allout("\n mylist[]= ", mylist ) ;
  return 0 ;
}
