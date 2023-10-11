#include <bits/stdc++.h>
using namespace std;
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;


void print_list(string s) {
  cout << "print_list( ) : " << s << "-" << endl;
}

void add_cross(string s) {
   s = s + "_X" ;
}

int main() {

  cout << "만능 for_each 함수를 사용하여 리스트 처리하기." << endl;
  list<string> dlist;

  dlist.push_back( "강아지");
  dlist.push_back(  "망아지");
  dlist.push_back(  "송아지");
  dlist.insert(dlist.begin(), "비둘기");
  dlist.insert(dlist.begin(), "두더지");

  // Print out each list element:
  for_each(dlist.begin(), dlist.end(), print_list);

  for_each(dlist.begin(), dlist.end(), add_cross );
  mout("add_cross( ) 이후 ", dlist ) ;

  return 0;
}
