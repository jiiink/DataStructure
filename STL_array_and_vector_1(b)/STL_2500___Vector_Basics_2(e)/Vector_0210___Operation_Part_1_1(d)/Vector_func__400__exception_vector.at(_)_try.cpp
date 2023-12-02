#include <bits/stdc++.h>
#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;




int main() {

    vector <int> wox { 105, 106, 107 } ;

    cout << "\n wox[0] = " << wox[0]   ;        // A
    cout << "\n wox.at(0) = " << wox.at(0) ;    // B

    try{
        cout << "\n wox.at(5) = " << wox.at(5) ;
    }
    catch( std::out_of_range& e) {
        cout << " at()- 예외 발생 ! \n 오류 종류 : \n" << e.what() << std::endl;
    } ;    // out of range error를 정식으로 발생


    // cout << "\n vox[0] = " << vox[0]   ;
    // 무책임함. 원소가 없을 때에는 system fault

} // end of main ( )

