#include <bits/stdc++.h>
using namespace std ;

int main () {

  unordered_set<string> myset = { "hat", "umbrella", "suit", "cola", "Box" };
  unordered_set<string> Qset  = {"hat","sunglasses","suit","cola", "t-shirt"} ;

  cout << "\n S.count()로 존재여부 판단하기 \n" ;
  for (auto& x: Qset ) {
    if (myset.count(x)>0)  cout << x << ": 있음." << endl;
    else                   cout << x << ": 없음." << endl;
  }

  cout << "\n S.find()로 존재여부 판단하기 \n" ;
  for (auto& x: Qset ) {
    if (myset.find(x) != myset.end() )  cout << x << ": 있음." << endl;
    else                   cout << x << ": 없음." << endl;
  }

  return 0;
}
