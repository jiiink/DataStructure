#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "

using namespace std ;

void dump_uset( string MSG, unordered_set<string> X){
  cout << "\n --  " << MSG << " -- \n" ;
  for ( unsigned i = 0; i < X.bucket_count(); ++i) {
    cout << "bucket [" << i << "] = ";
    for ( auto local_it = X.begin(i); local_it!= X.end(i); ++local_it )
      cout  << *local_it << " ,";
    cout << endl;
  }

}
// 한글을 사용하기 위해서는 default encoding으로 set해야 한다.

int main () {

  unordered_set<string> S ;

  S =  {"red","달수","blue", "X_mas", "345"} ;
  S.reserve(30) ;


  dump_uset( "연습이랑께..", S ) ;
  return 0;
}
