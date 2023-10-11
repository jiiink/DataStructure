// Generic find algorithm with input iterators associated with arrays, lists, and iostreams
#include <iostream>
#include <cassert>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

int main() {

  list<int> list1 = {12, 3, 25, 7, 11, 213, 7, 123, 29, -31};

  // 리스트에서 원소를 찾는 가장 간편한 방법은 만능 find( )를 사용하는 것.
  auto i = find(list1.begin(), list1.end(),7);
  cout << "\n 실험 3 --> " << *i ;
  cout << "\n 실험 4 --> " << *(++i) ; // *(i+1) ; 이렇게 하면 안됩니다.



  cout << "\n 'x'를 포함한 단어를 입력하시오. : " << flush;

  istream_iterator<char> in(cin);
  istream_iterator<char> eos;
  find(in, eos, 'x');

  cout << "\n\n 'x' 바로 뒤의 Char=> " << *(++in) <<  endl;
  return 0;
}
