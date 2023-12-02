#include <bits/stdc++.h>
using namespace std;

typedef stack<int> intstack ;

int main() {

     int i, myran[10]= { 4, 5, 7, 7, 9, 6, 4, 9, 2, 6 } ;
     intstack  *pstack ;
     stack < intstack * > sstt ;

     for(i=1; i < 10; i++) {
        if (i%2 == 0 ){
            cout << "새 stack을 하나더 만들었습니다." << endl ;
            pstack = new intstack ;
            cout << "만든 stack을 stack pointer stack에 Push 합니다. " << endl ;
            sstt.push( pstack) ;
        }
     }


     return 0;
}
