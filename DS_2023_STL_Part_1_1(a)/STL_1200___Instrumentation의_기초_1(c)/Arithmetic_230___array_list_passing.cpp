// Prof.Zoh's Work

#include <functional>
#include <bits/stdc++.h>
#include <random>

#define Lsize 6
using namespace std ;

long    Size[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000 } ;
vector  <float>    VF[ Lsize ] ;
list    <float>    LF[ Lsize ] ;
int     Gindex ;

void passvec( vector<float> Para ){
    for(auto &w : Para ){
        w = w + 0.1 ;
    }
}

void passlist( list<float> Para ){
    for(auto &w : Para ){
        w = w + 0.1 ;
    }
}

void pass_vec( ){
     passvec( VF[Gindex] ) ;
}

void pass_list( ){
     passlist( LF[Gindex] ) ;
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
} // end of Time_Check

void set_data (){
    srand( 20229 );
    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < Size[lindex] ; i++){
            fval = rand()/ RAND_MAX ;
            VF[ lindex ].push_back( fval ) ;
        }
    cout << "> In set_data( ): Size = " << Size[lindex] << " prepared " <<endl ;
    } // end of for i
} // set_data( )

int main(){
    string msg ;
    set_data( ) ;
    cout << "\n > 모든 자료구조가 준비되었습니다.  \n" ;

    cout << "\n\n vector <float>를 pass 하기 \n" ;
    for( Gindex=0 ; Gindex < Lsize ; Gindex++){
        msg= "\n> vector( "+ to_string( Size[Gindex]) + " ) passing time: ";
        Time_Check( msg, pass_vec, Gindex ) ;
    }

    cout << "\n\n list <float>를 pass 하기 \n" ;
    for( Gindex=0 ; Gindex < Lsize ; Gindex++){
        msg= "\n> vector( "+ to_string( Size[Gindex]) + " ) passing time: ";
        Time_Check( msg, pass_list, Gindex ) ;
    }
	return 0;
}
