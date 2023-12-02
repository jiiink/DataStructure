// 특별한 solution이 없음. console에서 작업하는 수 밖에 없음

#include <iostream>
#include <bits/stdc++.h>

// 입력의 끝 EOF는 ^Z

using namespace std;

int main() {

    vector <int> mv ;
    int token, i =0 ;

    cout << "숫자를 한개 씩 입력하시오.  : \n" ;

    while( cin >> token   ) {
           cout << "\n " << ++i <<": token: " <<  token << endl  ;
           mv.push_back( token ) ;
    }

    cout << "\n 입력이 모두 끝났습니다. " << endl;
    return 0;
}
