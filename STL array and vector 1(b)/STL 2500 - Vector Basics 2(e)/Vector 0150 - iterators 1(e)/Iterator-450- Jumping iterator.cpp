#include <bits/stdc++.h>
using namespace std;


int main() {
 int i = 1, jump= 1 ;

 vector <int>   intvec { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

 auto itr = intvec.begin() ;
 while( i++ <= 20 ){
        cout << "\n " << i << ": " << *itr ;
        itr += 1 ;
 }

} // end of main()

