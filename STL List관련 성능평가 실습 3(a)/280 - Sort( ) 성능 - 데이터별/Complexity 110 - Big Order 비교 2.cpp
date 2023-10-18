#include <bits/stdc++.h>
#include <random>
using namespace std ;

#define N 1000000
#define M 5000

double  Larray[ N ], dval ;
double  Darray[ M ][ M ] ;

bool cut_cond(int i, int j){
   double fval ;
   int myrand ;
   srand( i+j+2202 ) ;
   myrand = rand( ) ;
   fval = (double) myrand / (double) RAND_MAX ;
   //cout << "\n fval= " << fval ;
   if( fval  < 0.01 ) {
        cout << "\n cut -> i,j = "<<i << " , "<< j ;
        return( true );
   }
   else return( false ) ;
}

void Big_Oh(  ) {
    for(int i=0 ; i < M ; i++ ){
        for(int j=0 ; j < M ; j++ ){
            Darray[i][j] = pow((double)i, (double)j)+(i+j+3.0)*(i-j) + i + j ;
            if( cut_cond(i, j) ) return ;
        }
    }
} // end of big oh

void Theta_Oh(  ) {
    float ci, cj ;
    ci = 0.581 ; cj = 0.733 ;

     for(int i=0 ; i < (int) (ci*M) ; i++ ){
        for(int j=0 ; j < (int) (cj*M) ; j++ ){
            Darray[i][j] = pow((double)i, (double)j)+(i+j+3.0)*(i-j) + i + j ;
         }
    }
}

void Exact(  ) {
     for(int i=0 ; i < M ; i++ ){
        for(int j=0 ; j < M ; j++ ){
            Darray[i][j] = pow((double)i, (double)j)+(i+j+3.0)*(i-j) + i + j ;
        }
    }
} // end of exact( )


int main(){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec ;

    mybegin = chrono::system_clock::now();
        Exact( ) ;
    myend   = chrono::system_clock::now() ;
    sec = myend - mybegin ;
    tsec = sec.count() ;
	cout << "\n\n 2D Big[M][M] Eaxct( ) scan time =  " << tsec ;


    mybegin = chrono::system_clock::now();
        Big_Oh( ) ;
    myend   = chrono::system_clock::now() ;
    sec = myend - mybegin ;
    tsec = sec.count() ;
	cout << "\n\n 2D Big[M][M] Big_oh( ) scan time =  " << tsec ;

	mybegin = chrono::system_clock::now();
        Theta_Oh( ) ;
    myend   = chrono::system_clock::now() ;
    sec = myend - mybegin ;
    tsec = sec.count() ;
	cout << "\n\n 2D Big[M][M] Theta_Oh( ) scan time =  " << tsec ;
	return 0;
}
