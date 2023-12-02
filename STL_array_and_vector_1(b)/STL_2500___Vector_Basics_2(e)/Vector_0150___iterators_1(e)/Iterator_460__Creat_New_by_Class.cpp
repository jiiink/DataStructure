#include <bits/stdc++.h>
using namespace std;

class MyClass {
public:
    int size;
    vector<int> vec;
} ;


int main () {


  MyClass x, *y ;

  x.vec.push_back(100) ;
  x.vec.push_back(200) ;
  cout << " 결과 1  x.vec[1] = " << x.vec[1] << endl  ;

  y = new MyClass ;
  y->vec.push_back( -100) ;
  y->vec.push_back( -200) ;
  cout << " 결과 2 y->vec[1] = " << y->vec[1] << endl ;


  return 0;
}
