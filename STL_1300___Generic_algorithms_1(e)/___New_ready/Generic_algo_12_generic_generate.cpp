// Illustrating the generic generate algorithm
#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
class calc_square {
  T i;
 public:
  calc_square(): i(0) {}
  T operator()() { ++i; return i * i; }
};

int main()
{
  cout << "Illustrating the generic generate algorithm." << endl;
  vector<int> vector1(10);

  // Fill vector1 with 1, 4, 9, 16, ..., 100:
  generate(vector1.begin(), vector1.end(), calc_square<int>());

  for (int j = 0; j < 10; ++j) cout << "\n " << vector1[j]  ;

  return 0;
}
