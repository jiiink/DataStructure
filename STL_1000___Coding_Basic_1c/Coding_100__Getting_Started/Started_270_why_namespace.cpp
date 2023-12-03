#include <iostream>
#include <bits/stdc++.h>

namespace PNU {  //  똥개들 한번에 부를 때 사용
    int val = -100 ;
    std::string my = "Good Boy!" ; // string은 기본반찬이 아니라 std 주문 반찬이다.

    int get_val(){
        return (val*99) ;
    }
}

using namespace std;

int main() {
    int val = 5;

    cout << "PNU::val= "  << PNU::val << "\n" ;
    cout << "PNU::my= " << PNU::my <<"\n" ;
    cout << "PNU::get_val()= "  << PNU::get_val() << "\n"  ;

}


