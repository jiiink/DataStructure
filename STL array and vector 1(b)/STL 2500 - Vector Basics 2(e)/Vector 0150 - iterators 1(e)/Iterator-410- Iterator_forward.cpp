// 반복자. 아주 중요한 개념이다. STL 자료구조에 접근하는 유일한 방법
// 이제 여러분은 그 시작과 끝 위치, 갯수를 기억하고 있을 필요가 없다.
// myX.begin(), myX.end()

#include <bits/stdc++.h>
using namespace std;


int main() {
    vector <char> myvector;      // list container for character elements
    vector <char>::iterator          p ;
    vector <char>::reverse_iterator rp ;


    for (char c='A'; c<='K'; ++c) {  // append elements from 'a' to 'z'
        myvector.push_back(c);
    }

    cout << "\n\n 전진 반복자를 이용해서  앞으로 나갑니다. "  ;
    for(p=myvector.begin(); p < myvector.end(); p++ ) {
        printf("\n %2d = %c", p - myvector.begin() , *p ) ;

    }

    cout << "\n\n 후진 반복자를 이용해서  거꾸로 돌아갑니다. "  ;
    for(rp=myvector.rbegin(); rp < myvector.rend(); rp++ ) {
        printf("\n %2d = %c", rp - myvector.rbegin() , *rp ) ;

    }

    cout << "\n\n 양방향 반복자를 이용해서  앞 뒤로 진행. " ;
    for( p=myvector.end()-1 ; p >= myvector.begin(); p-- ) {
        printf("\n %2d = %c", myvector.end() - p -1  , *p ) ;

    }

} // end of main( )
