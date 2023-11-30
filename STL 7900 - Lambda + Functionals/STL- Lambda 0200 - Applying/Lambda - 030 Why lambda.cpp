#include <bits/stdc++.h>
using namespace std;


int main() {
   vector <int> cardinal { 1, 5, 6, 10, 12, 15 } ;
   vector<int>::const_iterator iter = cardinal.begin();
   vector<int>::const_iterator iter_end = cardinal.end();

   int total_elements = 1;
   while (iter != iter_end) {
        total_elements += *iter;
        ++iter;
   } cout << "total sum = " << total_elements << endl ;

} // end of main( )
