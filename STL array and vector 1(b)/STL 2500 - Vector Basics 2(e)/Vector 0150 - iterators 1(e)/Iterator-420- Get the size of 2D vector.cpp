#include <bits/stdc++.h>
using namespace std;

int main () {

   vector< vector<int> > my_vec \
   { {1}, {4,5}, {11,12,13,14}, {-3,-4}, {9,10} };

   cout <<  my_vec.size()   << endl ;
   cout <<  my_vec[1].size() << endl ;
   auto here = my_vec.end()-1 ;
   cout << *here->begin() ;
  return 0;
}
