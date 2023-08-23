// No.1 Execution Time Measurment Instrumentation

#include <iostream>
#include <stdio.h>
#include <ctime>		// Time Check를 하기위해 필요한 헤더
#include <cmath>		// Math Function들을 사용하기 위한 헤더
#include <vector>
using namespace std;

int main() {
	clock_t	ts, te ;
	time_t	currentTime;
	double	mydouble ;

	time(&currentTime);	// C++ int data type 덧셈시간을 측정합니다.
	cout << " Vector의 첫 위치에 계속 N번 삽입 \n\n";

	vector<int> M ;

	int N = 200000 ;
	ts = clock();
	for(int i=0 ; i <= N ; i++){
        M.insert( M.begin(), i ) ;
	}
	te = clock();		// 1. 실행시간 체크

	cout << "\n begin() insert time= " << ((double)(te - ts))/(long)CLOCKS_PER_SEC << " sec" ;

	ts = clock();
	for(int i=0 ; i <= N ; i++){
        M.insert( M.end(), i ) ;
	}
	te = clock();		// 1. 실행시간 체크

	cout << "\n   end() insert time= " << ((double)(te - ts))/(long)CLOCKS_PER_SEC << " sec" ;



	return 0;

}//End of Main
