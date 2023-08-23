// No.1 Execution Time Measurment Instrumentation

#include <iostream>
#include <stdio.h>
#include <ctime>		// Time Check를 하기위해 필요한 헤더
#include <cmath>		// Math Function들을 사용하기 위한 헤더
using namespace std;

int main() {
	clock_t	start;
	clock_t	end;
	time_t	currentTime;
	struct	tm t;
	char*	timeString;
	char	buffer[256];
	int		intX, counter;
	double	mydouble ;

	time(&currentTime);	// C++ int data type 덧셈시간을 측정합니다.
	cout << " 정수 int 덧셈 1억번 Test\t";
	start = clock();
	for(int i=1; i < 10000; i++) {
		for(int j = 1; j < 10000; j++)
			intX = i+j;
	}	// end of for i
	end = clock();		// 1. 실행시간 체크

	cout << ((double)(end - start))/(long)CLOCKS_PER_SEC << " sec" << endl;

	cout << " sin( )/double 연산 1억번 calling 2 \t";
	start = clock(); counter=0 ;
	for(int i=1; i < 10000; i++) {
		for(int j = 1; j < 10000; j++) {
            counter++ ;
            mydouble = sin((double)(i)/(double(j)) + i-j );	// printf("\n %d myd = %f ", counter, mydouble) ;
        }
	} // end of for i
	end = clock();	// 1. 실행시간 체크

	cout<<((double)(end - start))/(long)CLOCKS_PER_SEC<<" sec"<<endl;

	timeString = ctime(&currentTime);	// 2. ctime 함수 이용 현재 시간 출력
	printf("\n\n  Current Time : %s from ctime",timeString);

	// 3. asctime 함수를 이용하여 ctime과 동일하게 출력하기
	timeString = asctime(localtime(&currentTime));
	printf("\n Current Time : %s from local time",timeString);

	// 4. Format에 맞추어 시간 출력 (ex. 2019-09-19 AM 09:23:29 EST)
	t = *localtime(&currentTime);
	strftime(buffer,sizeof(buffer), "%Y-%m-%d %p %I:%M:%S %Z",&t);
	printf(" Formatted Time : %s\n",buffer);

    printf(" 실험이 모두 끝났습니다. " );
	getchar( );	// 정지 화면을 제시하고 사용자 입력을 기다림.
	return 0;

}//End of Main
