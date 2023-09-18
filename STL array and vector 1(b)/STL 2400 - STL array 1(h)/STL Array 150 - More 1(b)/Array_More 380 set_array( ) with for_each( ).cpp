#include <bits/stdc++.h>
using namespace std ;


void set_array(int n) {
    n= 0 ;
}

int main() {

    int i, array[1000] ;
    i = 0 ;

    for_each(array, &array[999], set_array ) ;
    // for_each(array, &array[999], cout<<array<<endl;) ;

    cout << "\n 실험이 끝났습니다. \n" ;
}
