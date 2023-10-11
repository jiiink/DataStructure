// 반드시 미리 BOOST가 설치되어야 합니다.
// 그리고 C++ link option이 이것을 표시해야 합니다.
// Setting > Compiler Option > Other Compiler Options
//                           -lboost_system
#include <list>
#include <iostream>
#include <boost/range/adaptor/reversed.hpp>
using namespace std ;

int main() {
   list <int> x {11, 44, 77, 55, 44, 99};

   cout << "\n Normal Loop: " <<  endl;
   for (auto i : x)  cout <<  i << ", ";

   cout <<  "\n Reversed Loop: " << endl;
   for (auto i : boost::adaptors::reverse(x))
      cout << i << ", ";
}
