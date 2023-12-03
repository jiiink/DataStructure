#include <iostream>
#include <iomanip>
#include <chrono>
#include <cmath>
using namespace std ;


void Test(){
	for ( long i = 0; i < 10000000; ++i )	{
		sqrt(  (double)i * (double)(i*13.0) );
	}
} // end of Test( )



int main(){

	chrono::system_clock::time_point mybegin, myend ;
	chrono::duration<double> sec ;  // 시간 차를 계산하는 특별한 변수


	mybegin = chrono::system_clock::now();    // 찰칵, 시작 시간 잽니다.
        Test();  // 측정할 함수를 여기에 넣습니다.
	myend   = chrono::system_clock::now() ;  // 찰칵, 끝나는 시간 기록

	sec = myend - mybegin ;

	cout << "Test() 1: 수행 시간(초) : " << sec.count() << " seconds" << endl;

	mybegin = chrono::system_clock::now();    // 찰칵, 시작 시간 잽니다.
        Test();  // 측정할 함수를 여기에 넣습니다.
	myend   = chrono::system_clock::now() ;  // 찰칵, 끝나는 시간 기록
	cout << "Test() 2: 수행 시간(초) : " << sec.count() << " seconds" << endl;
	return 0;
}
