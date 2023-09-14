/*
어떤 vector는 pointer로 구성되어 있는데
이것을 따라가면 다른 정수 벡터가 있다.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j, k ;
    vector <int> posi = {   1,   2,   3,   4,   5, 6, 7, 8, 9, 10} ;
    vector <int> nega = { -11, -22, -33, -44, -55} ;
    vector <int * >  iv ;
	vector < vector<int> *>   vv ;
	vector < vector<int> *>::iterator itvv ;

	vv.push_back( &posi ) ;
	vv.push_back( &nega ) ;

	cout << "\n Test 1 = " << (*vv[0])[4] ;
	//                  첫번째 pointer를 따라가서 만나는 vector의 4번째 원소
	cout << "\n Test 2 = " << (*vv[1])[0] ;

} // end of main()
