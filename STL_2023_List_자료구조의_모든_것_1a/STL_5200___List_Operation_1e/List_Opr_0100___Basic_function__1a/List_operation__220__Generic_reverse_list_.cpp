#include <bits/stdc++.h>
using namespace std;
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "

int main() {
  list <int> la { 34, 45, 56, 67, 78, 98, 100 }  ;
  cout << "\n 문자열 뒤집기\n " ;
  string string1 = "Summer Time Killer";
  cout << "\n Before reverse  ===> " << string1 ;
  reverse(string1.begin(), string1.end());
  cout << "\n After reverse  ===> " << string1 ;


  cout << "\n\n 벡터 배열 뒤집기 \n" ;
  vector <string> vs = {"Ama", "lia", "Rodr", "igues"} ;
  allout("vs Original ", vs) ;
  reverse( vs.begin() , vs.end() ) ;
  allout("vs after reverse ", vs) ;


  cout << "\n 리스트 뒤집기 " << endl;
  allout("la before ", la ) ;
  reverse( la.begin(), la.end() ) ;
  allout("la after reverse ", la ) ;
  return 0;
}
