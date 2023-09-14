/*
std::array vs std::vector
1. array 는 사이즈가 고정, vector 는 동적으로 증가.
2. array 는 동적 메모리 사용하지 않은. vector 는 사용.

std::array vs C-Array
1. array는 객체임. 사이즈를 알수 있음. C-Array 는 불가
2. array는 엘리먼트가 하나도 없어도 됨. C-Array 는 불가
3. array는 생성시 파라미터를 통해 명시적으로 크기를 알려줘야 함.
   C-Array는 초기화를 통해 크기를 추측해낼 수 있음.
4. array는 같은 type끼리의 대입(assignment) 가능. C-Array 는 불가.           */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    array <int, 5> myarray;         // 반드시 크기가 compile time에 결정되어야 한다.

    myarray = { 0, 1, 2, 3, 4 };    // okay
    cout << endl ; for(auto& s: myarray ) cout << s << ' ';

    myarray = { 9, 8, 7 };          // okay, elements 3 and 4 are set to zero!
    cout << endl ; for(auto& s: myarray ) cout << s << ' ';
    // myarray = { 0, 1, 2, 3, 4, 5 }; // 불가능 ,  원소의 개수가 5개

    myarray[3] = -222; // no bounds checking
    myarray.at(4) = 3; // does bounds checking

    cout << endl ; for(auto& s: myarray ) cout << s << ' ';

} // end of main( )
