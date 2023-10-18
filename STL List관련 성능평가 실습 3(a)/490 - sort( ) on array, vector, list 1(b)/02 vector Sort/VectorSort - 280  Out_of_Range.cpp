#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <stdio.h>
#include <string.h>
#include <typeinfo>
using namespace std;

int main() {

	// 실험 : vector index가 넘어갈 때 예외 처리 (아주 중요함)
	vector<int> vwi {10, 20, 30, 40, 50, 60 } ;
	cout << "[10]번째 원소 = " << vwi[10] << endl;

	try {
		//cout << vwi[10] << endl;
		int i = vwi.at(10) ;
	}
	catch(out_of_range e) {  //
		cout << "\n 벡터의 참조 범위를 벗어났습니다. 경고 !!" << endl;
	    cout << "\n Exception Type: " << typeid(e).name() << endl;
	}


} // end of main ( )
