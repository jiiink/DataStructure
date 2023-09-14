/*
v.capapcity( ) ; 현재 vector에 넣을 수 있는 원소의 개수.
v.size( ) ; 현재 원소의 개수

 */

#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> myvector;
  vector<unsigned char>::size_type v1 = myvector.max_size();

  // set some content in the vector:
  for (int i=1; i<= 10; i++) myvector.push_back(i);

  cout << "size: " << (int) myvector.size() << '\n';
  cout << "capacity: " << (int) myvector.capacity() << '\n';
  cout << "max_size: " << v1 << '\n';

  cout << "\n\nvector를 크기 50으로 늘입니다.\n " ;
  myvector.reserve(50) ;
  cout << "size: " << (int) myvector.size() << '\n';
  cout << "capacity: " << (int) myvector.capacity() << '\n';
  cout << "max_size: " << v1 << '\n';

  return 0;
}

