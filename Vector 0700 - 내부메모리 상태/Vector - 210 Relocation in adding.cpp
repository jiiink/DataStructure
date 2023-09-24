#include <iostream>
#include <vector>
#include <array>
using namespace std ;

// vector는 준비된 공간에 가득차면 전체를 relocation을 한다.
// 그러나 프로그래머에서는 한마디 불평도 없이.
// 이것을 vector의 미덕(virtue) 이라고 한다.
int main() {

  vector< int > Ohmy ;

  cout << "\n 이번은 미리 정해진 array에서 해보자 \n" ;
  for (int i = 0; i < 100; ++i) {
    Ohmy.push_back( i ) ;
    cout << "\n i= " << i << "  " << "head 주소 = " << &( Ohmy[0]) << " ";
  }


} // end of main()
