
#include <bits/stdc++.h>
using namespace std ;


int main(){

  cout << endl;

  array <int,8> array1{1,2,3,4,5,6,7,8};
  for_each( array1.begin(),array1.end(),[](int v){cout << v << " ";});

  cout << endl;

  int sum = 0;
  for_each(array1.begin(), array1.end(),[&sum](int v) { sum += v; });
  cout << "sum of array{1,2,3,4,5,6,7,8}: " << sum << endl;

  // change each array element to the second power
  for_each( array1.begin(), array1.end(),[](int& v) { v=v*v; });

  cout << endl;

}
