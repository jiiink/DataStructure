// equal algorithm example
#include <iostream>     // cout
#include <algorithm>    // equal
#include <vector>       // vector

# 두 컨테이너의 내용이 순서대로 동일한가 ?

using namespace std ;

bool mypredicate (int i, int j) {
  return (i==j);
}

int main () {
  int myints[] = {20,40,60,80,100};               //   myints의 원소 20 40 60 80 100
  vector<int>myvector (myints,myints+5);     // myvector의 원소 20 40 60 80 100

  if ( equal (myvector.begin(), myvector.end(), myints) )
    cout << "두 벡터의 원소는 같습니다.\n";
  else
    cout << "두 벡터의 원소는 같지 않습니다.\n";

  myvector[3]=81;                                 // myvector의 [3] 원소는 81

  // using predicate comparison:
  if ( equal (myvector.begin(), myvector.end(), myints, mypredicate) )
    cout << "두 벡터의 원소는 같습니다.\n";
  else
    cout << "두 벡터의 원소는 같지 않습니다.\n";

  return 0;
}
