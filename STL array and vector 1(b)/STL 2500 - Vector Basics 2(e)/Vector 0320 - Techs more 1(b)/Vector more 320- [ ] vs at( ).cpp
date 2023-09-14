#include <bits/stdc++.h>
using namespace std;

#define dump(msg,X) cout<<msg;for(auto w:X) cout << w << " "


int main() {

    vector <int> wox { 105, 106, 107 } ;

    cout << "\n wox[0] = " << wox[0]   ;        // A
    cout << "\n wox.at(0) = " << wox.at(0) ;    // B

    //cout << "\n wox.at(5) = " << wox.at(5) ;    // out of range error를 정식으로 발생
     cout << "\n wox[5] = " << wox[5]   ;        // 무책임함. 원소가 없을 때에는 심각한 오류,

} // end of main ( )

