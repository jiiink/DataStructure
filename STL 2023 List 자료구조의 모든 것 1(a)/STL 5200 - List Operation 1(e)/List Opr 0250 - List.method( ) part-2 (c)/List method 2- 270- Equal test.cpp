#define  skip (cout << "\n\n")
#include <bits/stdc++.h>
using namespace std;


int main() {

  cout << "리스트 크기 비교하기  "    << endl;
  list  <int> la { 23, 34, 55, 66, 12, 9 } ;
  list  <int> lb { 23, 34, 55, 66, 12, 9 } ;
  list  <int> lc { 23, 34, 55 } ;
  list  <int> ld { 23, 34, 55, 66, 10, 9 } ;

  if ( la == lb ) cout << "la == lb " ;
  else cout << "la !== lb " ;

  skip ;
  if ( la == lc ) cout << "la == lc " ;
  else cout << "la != lc " ;

  skip ;
  if ( la < ld ) cout << "la == ld " ;
  else cout << "la != ld " ;

  return 0;
}

