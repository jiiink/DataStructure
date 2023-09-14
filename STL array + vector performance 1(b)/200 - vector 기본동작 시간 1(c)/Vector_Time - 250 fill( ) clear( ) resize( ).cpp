// Prof.Zoh's Work

#include <functional>
#include <bits/stdc++.h>
#include <random>

#define Lsize 6
using namespace std ;

long    Size[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000 } ;
vector  <float>    V[ Lsize ], T[ Lsize ] ;
list    <float>    L[ Lsize ] ;
int     Gindex ;

void vec_fill( ){
     float w ;w = 89.9282 ;
     fill( V[Gindex].begin(),  V[Gindex].end(), w ) ;
}

void vec_all_zero() {
    int mysize ;
    mysize = Size[Gindex] ; //no memory allocating
    V[Gindex].resize(0);
    V[Gindex].resize( mysize, 0);
}


void vec_clear( ){
     V[Gindex].clear( ) ;
}


double Time_Check( string MSG, function <void ( )> target, int w ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double, milli> msec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // 측정할 함수
	myend   = chrono::system_clock::now() ;
	msec = myend - mybegin ;

    tsec = msec.count() ;
    cout << MSG << ": " << tsec ;
    return( tsec ) ;
} // end of Time_Check( ) by Zoh 2020. 추석 전전날 아침에


void set_data (){
    srand( 20229 );

    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < Size[lindex] ; i++){
            fval = rand()/ RAND_MAX ;
            V[ lindex ].push_back( fval ) ;
            T[ lindex ].push_back( fval ) ;
        }
    cout << "> In set_data( ): Size = " << Size[lindex] << " prepared " <<endl ;
    } // end of for i

}

int main(){
    string msg ;

    set_data( ) ;
    cout << "\n > 모든 자료구조를 측정을 위하여 준비되었습니다.  \n" ;

    cout << "\n\n # fill( v.begin(), v.end(), w ) \n" ;
    for( Gindex=0 ; Gindex < Lsize ; Gindex++){
        msg= "\n> fill(  "+ to_string( Size[Gindex]) + " . ";
        Time_Check( msg, vec_fill, Gindex ) ;
    }

    cout << "\n\n # v.clear( )  \n" ;
    for( Gindex=0 ; Gindex < Lsize ; Gindex++){
        msg= "\n> v.clear( )   "+ to_string( Size[Gindex]) + ". ";
        Time_Check( msg, vec_clear, Gindex ) ;
    }

    cout << "\n\n # vec_all_zero( ) \n" ;
    for( Gindex=0 ; Gindex < Lsize ; Gindex++){
        msg= "\n> vec_all_zero( )   "+ to_string( Size[Gindex]) + ". ";
        Time_Check( msg, vec_all_zero, Gindex ) ;
    }
	return 0;
}
