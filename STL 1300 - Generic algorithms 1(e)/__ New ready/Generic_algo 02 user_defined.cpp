// Demonstrating STL vector constructors with a user-defined type

#include <iostream>
#include <string>
#include <cassert>
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

class U {
public:
  unsigned long id;
  U() : id(0) { }  // 생성자, 데이터를 만든다.
  U(unsigned long x) : id(x) { } // 데이터에 값을 지정한다.
};

bool operator==(const U& x, const U& y) { return x.id == y.id;  }
bool operator!=(const U& x, const U& y) { return x.id != y.id;  }

int main() {

  cout << "Demonstrating STL vector constructors with a user-defined type." << endl;
  vector<U> vector1, vector2(3);



  assert (vector2[0] == U() && vector2[1] == U() && vector2[2] == U());
  assert (vector2 == vector<U>(3, U()));

  return 0;
}
