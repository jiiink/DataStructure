#include <bits/stdc++.h>
using namespace std;

#define dump(msg,X) cout<<msg;for(auto w:X) cout << w << " "


int main() {

    array <int,5> wox { 105, 106, 107 } ;

    cout << "\n wox[0]    = "  << wox[0]   ;        // A
    cout << "\n wox.at(0) = "  << wox.at(0) ;    // B

    //cout << "\n wox.at(11) = " << wox.at(11) ;    // out of range error를 정식으로 발생
    cout << "\n wox[11]    = " << wox[11]   ;        // 무책임함. 원소가 없을 때에는 심각한 오류,

} // end of main ( )

