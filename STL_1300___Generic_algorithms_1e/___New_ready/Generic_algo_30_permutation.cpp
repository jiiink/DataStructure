// Illustrating the generic permutation algorithms
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <cstdio>
using namespace std;

template <typename C>
void dump(const char *desc, C c) {
	cout.width(12);
	cout << left << desc << "==> ";
	copy(c.begin(),c.end(),ostream_iterator<typename C::value_type>(cout," "));
	cout << endl;
} // dump( ) template

int main(){

  cout << "Illustrating the generic permutation algorithms." << endl;
  vector<int> vector1(3);

  for (int i = 0; i < 3; ++i) vector1[i] = i;

  // In lexicographical order the permutations of 0 1 2 are
  // 0 1 2, 0 2 1, 1 0 2, 1 2 0, 2 0 1, 2 1 0.
  // Show that from 0 1 2 next_permutation produces 0 2 1:
  next_permutation(vector1.begin(), vector1.end());
  dump("다음 조합 1", vector1) ;
  next_permutation(vector1.begin(), vector1.end());
  dump("다음 조합 2", vector1) ;
  next_permutation(vector1.begin(), vector1.end());
  dump("다음 조합 3", vector1) ;
  next_permutation(vector1.begin(), vector1.end());
  dump("다음 조합 4", vector1) ;

  // Show that from 0 2 1 prev_permutation() produces 0 1 2:
  prev_permutation(vector1.begin(), vector1.end());
  dump("이전 조합", vector1) ;


  return 0;
}
