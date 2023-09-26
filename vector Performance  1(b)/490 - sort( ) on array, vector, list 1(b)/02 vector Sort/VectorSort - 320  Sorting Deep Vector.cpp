// vector에서 적용할 수 있는 다양한 동작(operator) 중 sorting을 실험해 봄
#include <bits/stdc++.h>

using namespace std;


int main() {

    int i,j ;

    cout << "다차원 vector를 sorting 해 봅니다." ;

	vector < vector<int> > vvi = { {4,5}, {7,6}, {2,6}, {1,7}, {7,4}, {3,5}, {4,7}, {5,1} } ;
    sort( vvi.begin(), vvi.end() ) ;

    for(int i=0 ; i < vvi.end()-vvi.begin(); i++){
        cout << "\n" << vvi[i][0] << ", " << vvi[i][1] ;
    }
	return 0;
} // end of main ( )
