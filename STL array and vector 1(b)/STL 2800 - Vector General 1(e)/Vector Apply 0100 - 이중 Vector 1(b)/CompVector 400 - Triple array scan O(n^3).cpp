#include <bits/stdc++.h>
#include <random>
#define N 6000

using namespace std;



float T[N][N];

void setT(){  //
      for(int i=0; i < N ; i++){
         for(int j=0; j < N ; j++){
            T[i][j] = rand( );
         }
      }
} // end of setT()

int main() {

    setT( );  // ÃÊ±âÈ­

    for(int k = 0 ; k < N ; k++){
        cout << "\n k= " << k ;
        for(int i=0; i < N ; i++){
           for(int j=0; j < N ; j++){
            T[i][j] = min ( T[i][j], T[i][k]+T[k][j]) ;
           }
       }
    }
    cout << "\n Done!" ;
} // end of main()
