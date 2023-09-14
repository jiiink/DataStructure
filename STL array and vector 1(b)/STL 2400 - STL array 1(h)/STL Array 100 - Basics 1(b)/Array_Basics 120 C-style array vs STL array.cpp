#include <bits/stdc++.h>
#include <iostream>
using namespace std ;

/*
우리가 배열을 함수로 넘기면 그것은 array의 특성을 잃고
단지 하나의 pointer로 변한다. 우리 컴파일러에서는
pointer가 4 byte로 배정받으므로 결과는 1이 된다.
*/

void printSize(int A[5] ) {
    cout << "sizeof A[5]: " << sizeof(A) << endl;
    cout << "size= " << sizeof(A)/sizeof(int) << endl;
}

void printElements( array<int,5> &someArray) {
    cout << "In printElements( ): " ;
    for ( int i : someArray) {
       cout << i << ", " ;
    }
}

int main() {

    int myArray[5] = {1, 2, 3, 4, 5};
    array <int,5>   stlarray  {12, 23, 34, 45, 56 } ;

    size_t arraySize = sizeof(myArray) / sizeof(int)  ;
    cout << "\n " << sizeof(myArray) << "  " <<  sizeof(int) << endl ;
    cout << "C-style array size: " << arraySize << endl;

    printSize(myArray);          //함수로 넘기면 myArray는 pointer로만 넘어감.
    printElements( stlarray ) ;

    cout << "\n 왜 STL array를 사용해야 하는가?: \n " ;
    for(auto w : stlarray) cout << w << "-" ;

}

