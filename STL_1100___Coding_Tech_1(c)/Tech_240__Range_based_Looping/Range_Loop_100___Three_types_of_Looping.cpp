#include <iostream>
#include <algorithm>

#define Skip  cout<<"\n>\n>\n"
using namespace std;

void print_fnc(int n) {
    cout << n << " ";
}

int main() {

    int    N[5] = { 1, 2, 3, 4, 5 };
    double D[6]=  { 1.67850, 2.0, 3.3455, 6.000, -9.45} ;

    cout << "\n 일반적인 for 문" << endl;

    for( int i = 0; i <= 4; ++i ) {  // index 하나 차이 error, off-one
        cout << N[i] << " " ;
    }

   cout << "\n for_each 반복문 " << endl;
   for_each( N, &N[5], print_fnc );
   cout << endl;


    cout << "\n Range based for 문1 " << endl;
    for( auto w : N ) {
        cout << w << " " ;
    }

    Skip ;
    cout << "\n Range based for 문1 " << endl;
    for( auto w2: D ) {
         cout << w2 << " " ;
    }

    return 0;
}

