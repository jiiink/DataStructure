#include <bits/stdc++.h>
using namespace std ;


int main() {

   vector< double > df {34.34114, 0.56, 89202.0293, -34.002929, 23.82393, 0.007} ;

   cout << fixed << setw(11) << setprecision(3)  ;
   for (auto w : df ){
        printf("\n floatA = %5.2f ", w);
   }

   for (auto w : df ){
        cout << "\n " <<  w ;
   }


} // end of main( )
