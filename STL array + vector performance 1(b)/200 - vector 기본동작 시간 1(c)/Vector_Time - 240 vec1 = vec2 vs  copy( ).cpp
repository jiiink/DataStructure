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

void vec_copy( ){
     copy( V[Gindex].begin(),  V[Gindex].end(), T[Gindex].begin() ) ;
}

void vec_assign( ){
     T[Gindex] = V[Gindex] ;
}

void vec_clear( ){
     V[Gindex].clear( ) ;
}


void for_copy( ){
    int wt ;
     for(int i = 0 ; i < V[Gindex].size() ; ++i) {
         T[Gindex][i]= V[Gindex][i] ;
     }
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

    cout << "\n > Generic copy( ) 함수를 이용해서 복사함. \n" ;
    for( Gindex=0 ; Gindex < Lsize ; Gindex++){
        msg= "\n> vector( "+ to_string( Size[Gindex]) + " ) generic_copy Time: ";
        Time_Check( msg, vec_copy, Gindex ) ;
    }

    cout << "\n\n > for-loop 개별 원소 단위로 복사함. \n" ;
    for( Gindex=0 ; Gindex < Lsize ; Gindex++){
        msg= "\n> vector( "+ to_string( Size[Gindex]) + " ) for_copy Time: ";
        Time_Check( msg, for_copy, Gindex ) ;
    }

    cout << "\n\n > vector assignment v1 = v2 . \n" ;
    for( Gindex=0 ; Gindex < Lsize ; Gindex++){
        msg= "\n> vector( "+ to_string( Size[Gindex]) + " ) with assignment: ";
        Time_Check( msg, vec_assign, Gindex ) ;
    }

    cout << "\n\n > vector Vector.clear( ). \n" ;
    for( Gindex=0 ; Gindex < Lsize ; Gindex++){
        msg= "\n> vector( "+ to_string( Size[Gindex]) + " ) clear( ) function. ";
        Time_Check( msg, vec_clear, Gindex ) ;
    }

	return 0;
}
