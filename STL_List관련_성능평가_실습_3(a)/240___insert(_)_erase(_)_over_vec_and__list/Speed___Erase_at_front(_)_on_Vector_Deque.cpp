#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;


#define N    10000000   //
list   <int> List1 ;

void Prepare( ){
    for(int i = 0 ; i < N; i++ ) {
           List1.push_back( i+1 )  ;
    }
}

int List_get_size( ){
    List1.push_back(99);
    return ( List1.size() ) ;
}

int List_get_empty( ){
    return ( List1.empty() ) ;
}


double Time_Check( string MSG, function <void ( )> target, int w ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // 측정할 함수
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    cout << "\n" << MSG << ": " << tsec << endl;
    return( tsec ) ;
} // end of Time_Check( )

int main(){

    Time_Check( " 데이터 준비 시간   :" , Prepare, 0 ) ;

    Time_Check( "List_get_size( ) 처리 시간  :" ,  List_get_size, 0 ) ;

    Time_Check( "List_get_empty( ) 처리 시간 :" ,  List_get_empty, 0 ) ;

	return 0;
}
