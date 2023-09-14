
#include <list>
#include <iostream>
#include <boost/range/adaptor/reversed.hpp>

// BOOST를 설치한 다음에 compiler option에서 boost를 연결해야 한뎅,....

using namespace std ;

int main() {
   list <int> x {11, 44, 77, 55, 44, 22, 33, 30, 88, 99, 55, 44};

   cout << "\n Normal Loop" <<  endl;
   for (auto i : x)  cout <<  i << '\n';

   cout <<  "\n Reversed Loop" << endl;
   for (auto i : boost::adaptors::reverse(x))
      cout << i << '\n';
}
