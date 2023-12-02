#include <chrono>
#include <iostream>
#include <cmath>

using namespace std ;

void Test(){
	for ( long i = 0; i < 10000000; ++i )	{
		sqrt( 123.456L  +i );
	}
}



int main(){

	chrono::system_clock::time_point start = chrono::system_clock::now();
	Test();
	chrono::duration<double> sec = chrono::system_clock::now() - start;
	cout << "Test() 함수를 수행하는 걸린 시간(초) : " << sec.count() << " seconds" << endl;

	return 0;
}


