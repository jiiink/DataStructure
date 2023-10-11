#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

string name ;
int main() {

  list  <int> myl = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
  auto it = myl.begin() ;
  mout("초기 List", myl ) ;

  advance(it, +3) ;
  cout << "\n 현재 *it = " << *it ;
  it = myl.erase( it) ;     // 중간노드는 지운 다음에 그 다음 노드를 가르킨다.
  mout("1. List==> ", myl ) ;
  cout << "\n 지운 후 *it = " << *it ;


  it = myl.begin( ) ;
  mout("2. List==> ", myl ) ;     // 첫노드를 지운 다음에는 다시 그 첫 노드를 가르킨다.
  cout << "\n head를 지운 후 *it = " << *it ;



  it = myl.end( ) ;
  mout("3. List==> ", myl ) ;     // End( ) dummy를 지운 다음.
  cout << "\n end( ) 지운 후 *it = " << *it ;


  it = myl.end( ) ;
  --it;              // 마지막 원소
  cout << "\n  tail *it = " << *it ;
  it = myl.erase( it) ;
  cout << "\n 끝 tail을 지운 후 *it = " << *it ;
  mout("4. List==> ", myl ) ;     // 마지막 노드를 지운 다음.
} // end of main()





