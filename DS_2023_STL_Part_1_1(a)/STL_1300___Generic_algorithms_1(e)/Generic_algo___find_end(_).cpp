// find_if example
#include <iostream>     // std::cout
#include <algorithm>    // std::find_if
#include <vector>       // std::vector

bool IsOdd (int i) {
  return ((i%2)==1);
}

bool Greater (int i) {
  return ((i>100));
}

int main () {
  std::vector<int> myvector {56, 57, 78, 456, 776, 324, 123, -8, 372 };



  std::vector<int>::iterator it = std::find_if (myvector.begin(), myvector.end(), Greater);
  std::cout << "The first odd value is " << *it << '\n';

  return 0;
}
