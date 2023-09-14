
#include <list>
#include <iostream>
#include <boost/range/adaptor/reversed.hpp>
using namespace std ;

int main() {
   vector <int> x {11, 44, 77, 55, 55, 44};

   cout << "\n Normal Range-based Loop" <<  endl;
   for (auto i : x)  cout <<  i << ", ";

   cout <<  "\n Reversed  Range-based Loop" << endl;
   for (auto i : boost::adaptors::reverse(x))
      cout << i << ", ";
}
