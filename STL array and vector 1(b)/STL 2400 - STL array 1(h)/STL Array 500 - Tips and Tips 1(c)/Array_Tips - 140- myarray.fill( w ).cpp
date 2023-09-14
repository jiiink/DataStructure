#include <bits/stdc++.h>
using namespace std ;

int main () {
  array<string,6> myarray;

  myarray.fill( "Pusan");

  cout << "\n myarray contains:";
  for ( string& x : myarray) { cout << ' ' << x; }

  cout << "\n arr1 contains:";
  array<string, 8> arr1;
  arr1.fill("-메롱-");
  for(auto& s: arr1) // 함수형 표현법, C++에서 가능.
        cout << s  ;



  return 0;
}
