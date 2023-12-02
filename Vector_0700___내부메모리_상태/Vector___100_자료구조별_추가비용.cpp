#include <bits/stdc++.h>
using namespace std ;

// vector는 준비된 공간에 가득차면 전체를 relocation을 한다.
// 그러나 프로그래머에서는 한마디 불평도 없이.
// 이것을 vector의 미덕(virtue) 이라고 한다.
int main() {

  vector< int      > Zvec ;
  array <int,    10> Arr10;
  array <double, 10> Drr10;

  cout << "sizeof(vector<int>) = " << sizeof(vector<int  >) << endl;
  cout << "sizeof(stack <int>) = " << sizeof(stack <int  >) << endl;
  cout << "sizeof(map<int,int>) = " << sizeof(map<int,int  >) << endl;
  cout << "sizeof(list  <int>) = " << sizeof(list  <int  >) << endl;
  cout << "sizeof(array <int>) = " << sizeof(array <int,0>) << endl;


  cout << "sizeof(Zvec) = " << sizeof(Zvec) << endl;

  cout << "sizeof(Arr10) = " << sizeof(Arr10) << endl;
  cout << "sizeof(Drr10) = " << sizeof(Drr10) << endl;

} // end of main()
