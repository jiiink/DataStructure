// 수행시간 측정하는 함수

#include <iostream>
#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>

using namespace std ;


long N = 100000  ; //  반드시 밖에 잡하야 한다.


void string_insert_front(){
    string str1 ;
	for ( long i = 0; i < N; ++i )	{
		str1.insert(0, "q") ;
	}
}

void string_append( ){

    string str1 ;
	for ( long i = 0; i < N; ++i )	{
		str1.append("q") ;
	}
}


// 시간을 측정할 함수는 반드시 void fun( ) 로 만들어야 합니다.
//  잡다부리한 parameter 넣으면 안됩니데이....

double Time_Check( string MSG, function <void ( )> target ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target();  // 측정할 함수
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    cout << "\n" << MSG << ": " << tsec << endl;
    return( tsec ) ;
} // end of Time_Check( ) by Zoh 2020. 추석 전전날 아침에


int main(){


    Time_Check( "string_append()= ", string_append ) ;
    Time_Check( "N, string_insert_front()= " ,  string_insert_front ) ;
    N = 2 * N ;
    Time_Check( "2N, string_insert_front()= " ,  string_insert_front ) ;
    N = 2 * N ;
    Time_Check( "4N, string_insert_front()= " ,  string_insert_front ) ;

	return 0;
}
