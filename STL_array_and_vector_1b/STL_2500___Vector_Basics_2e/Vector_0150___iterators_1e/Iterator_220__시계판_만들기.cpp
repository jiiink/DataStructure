#include <bits/stdc++.h>
using namespace std;

//  문제 시계판 만들기

int main() {
 int i = 0, jump= 1 ;

 vector <int>   intvec { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

 auto itr = intvec.begin() ;
 while( ++i <= 25 ){
        cout << "\n Step: " << setw(2) << i  << ": " << setw(3) << *itr ;
        itr += 1 ;
        if( itr == intvec.end()) itr = intvec.begin();
 }

} // end of main()

