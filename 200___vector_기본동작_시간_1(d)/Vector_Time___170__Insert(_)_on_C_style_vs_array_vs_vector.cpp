// 수행시간 측정하는 함수
// 결론 vector reserve는 큰 매력이 없다.

#include <iostream>
#include <chrono>
#include <cmath>
#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <vector>
#include <array>

using namespace std ;


#define N 10000000  // 천만번, 반드시 밖에 잡하야 한다.
array  <long, N>  myarray ;
vector <long   >  myvector ;
vector <long   >  Rvec(N)  ;      // 이건 미리 N개를 잡아둠
int    carray         [N] ;

void C_style_insert(){
	for ( long i = 0; i < N; ++i )	{
		carray[i]=i ;
	}
}

void array_insert(){
	for ( long i = 0; i < N; ++i )	{
		myarray[i]=i ;
	}
}

// 여기에서 relocation이 발생한다.
void vector_push_back(){
	for ( long i = 0; i < N; ++i )	{
		myvector.push_back( i ) ;
	}
}

void Rvector_push_back(){
	for ( long i = 0; i < N; ++i )	{
		Rvec.push_back( i ) ;
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
    Time_Check( "array insert",  array_insert) ;
    Time_Check( "vector pushback", vector_push_back ) ;
    Time_Check( "Rvector pushback", Rvector_push_back) ;
    Time_Check( "c-스퇄 insert"     , C_style_insert) ;
	return 0;
}
