
#include <iostream>     // cout
#include <algorithm>    // find_if
#include <vector>       // vector
using namespace std ;

bool IsOdd (int i) {
  return ((i%2)==1);
}

int main () {
  vector<int>   myvector { 24, 6, 12, 80, -9, 65, 66, 51, 35, 9, 80,  100};


  vector<int>::iterator it = find_if (myvector.begin(), myvector.end(), IsOdd);
  cout << "\n 첫 홀수는  " << *it << '\n';
  cout << "\n 첫 홀수위치는  " << it - myvector.begin() << '\n';

  auto it2 =  find_if ( it+1 , myvector.end(), IsOdd);
  cout << "\n 둘 째 홀수는  " << *it2 << '\n';
  cout << "\n 둘때 홀수위치는  " << it2 - myvector.begin() << '\n';

  return 0;
}
