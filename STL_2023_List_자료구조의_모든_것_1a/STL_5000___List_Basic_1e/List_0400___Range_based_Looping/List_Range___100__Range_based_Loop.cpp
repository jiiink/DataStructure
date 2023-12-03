#include <bits/stdc++.h>
#define allout(msg,lx)  cout<<"\n"<<msg<<" : ";for(auto w : lx ) cout<< w << " , " ;
#define deepout(msg,deepl)  cout<<"\n"<<msg<<" : \n";\
                            for(auto w : deepl ){cout<<"\n";for(auto q:w) cout<< " " << q ;}

using namespace std ;

int main() {

    string text = "Cool Summer?" ;
    list <char>    lc (text.begin(), text.end()) ;  // 문자열로 리스트를 초기화 시키는 방법
    // python이라면 lc = list(text)  간단하게 되지롱...
    list <string>  ls (text.begin(), text.end()) ;

    int i = 0 ;
    for (auto w : lc ) {
            i++ ;
            cout << "\n -> " << setw(3)<<  i << " = " << w  ;
    }

    allout(" lc의 내용 ", lc ) ;

}

