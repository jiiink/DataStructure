#include <bits/stdc++.h>
#include <functional>
using namespace std;

int main() {
   vector <int> cardinal { 1, 5, 6, 10, 12, 15 } ;


   int total_elements = 1;
   for_each(cardinal.begin(), cardinal.end(),
         [&total_elements](int i) { total_elements *= i; });

   cout << "total sum = " << total_elements ;

} // end of main( )
