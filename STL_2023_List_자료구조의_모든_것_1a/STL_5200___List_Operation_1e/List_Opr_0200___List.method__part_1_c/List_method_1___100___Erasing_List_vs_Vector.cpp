#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

string name ;
int main() {

  list  <int> myl = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 23 }; // prime number 집합
  vector<int> myv = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 23 };

  mout( "시작 1", myv ) ;
  for( auto it=myv.begin(); it != myv.end() ; ){
    it = myv.erase(it) ;  // it는 지운 다음 원소를 return 한다.
    name = to_string( myv.end() - it) ;
    mout( name, myv ) ;
  }

  mout( "시작 2", myl ) ;
  int count = 0 ;
  for( auto itl=myl.begin(); itl != myl.end() ; ){
    itl = myl.erase(itl) ;  // 해당원소 itl을 지운 다음 원소의 iterator를 return 한다.
    mout( to_string(++count) , myl ) ;
  }

  cout << "\n 다른 방법으로 삭제하는 경우를 살펴보자 " ;
  myl = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 23 };

  mout( "시작 3", myl ) ;
  count = 0 ;
  for( auto itl=myl.begin(); itl != myl.end() ; ){
    myl.erase(itl++) ;  // 해당원소 itl을 지운 다음 원소의 iterator를 return 한다.
    mout( to_string(++count) , myl ) ;
  }

} // end of main()





