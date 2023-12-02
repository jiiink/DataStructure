#include <bits/stdc++.h>
using namespace std;

template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}


int main() {


  list<char> list1 = make< list<char> >("GoGoGo PNU!") ;
  set <char> set1 {'G', 'O', 'W', 'Z', '='};


  cout << "\n list1( )의 원소: " ;
  for(auto w : list1) {
    cout <<  w << ", " ;
  }

  cout << "\n set1( )의 원소: " ;
  for(auto w : set1) {
    cout <<  w << ", " ;
  }
  return 0;
}
