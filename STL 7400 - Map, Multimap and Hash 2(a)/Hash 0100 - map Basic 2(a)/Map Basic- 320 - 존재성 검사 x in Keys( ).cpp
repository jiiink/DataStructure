#include <bits/stdc++.h>
using namespace std;

int main () {
  map <char,int> mymap;
  map <char,int>::iterator it, ie ;
  int i, j ;

  string mystr ="compuTer scieTce" ;
  vector<char> carray( mystr.begin(), mystr.end() );

  mymap['b'] = 100;
  mymap['e'] = 200;
  mymap['n'] = 300;
  mymap['t'] = 211;
  mymap['c'] = 323;
  mymap['i'] = 367;


  if( mymap.find('T') == mymap.end() ) {
    printf("\n  mymap['T']==mymap.end()면 없다. \n") ;
  }

  if( mymap.count('T') == 0  ) {
    printf("\n  mymap['T']의 갯수가 0 이라면 존재하지 않는다? \n") ;
  }

  printf("\n mymap[T] = %d", mymap['T'] ) ;
  printf("\n mymap[e] = %d", mymap['e'] ) ;
  printf("\n 없는 것을 출력하면 mymap[#] = %p  <== ????? ", mymap.find('#') ) ;
  printf("\n 없는 것을 출력하면 mymap[#] = %p  <== ????? ", mymap.find('#') ) ;

  cout << "\n mymap[]의 원소 검사 \n" ;

  for( auto w : carray ) {
       //  cout << " " << w ;
       if( mymap.find(w) == mymap.end()) printf("\n '%c'는 key가 아님 ", w) ;
       else printf("\n mymap[%c] = %d", w , mymap[w] ) ;
  }
  // 이렇게 하면 mymap['T']=0으로 생성되게 된다.
  return 0;
}
