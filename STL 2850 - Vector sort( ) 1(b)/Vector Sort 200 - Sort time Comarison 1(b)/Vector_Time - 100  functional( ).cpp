#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <math.h>

using namespace std ;

int myadd(int a, int b){
    return(a+b) ;
}

int mysquare(int a, int b){
    return(a*a+b*b) ;
}

int myabs(int a, int b){
    return( abs(a-b)) ;
}

void mysort( vector <int> This  ){
     sort( This.begin(),This.end() ) ;
}

int meta_fun( function <int (int, int)> target, int a, int b  ){
    return ( target(a,b) ) ;
}

int main(){
    int t1, t2, t3 ;
    vector <int> Good = { 45, 32, 12, 65, 7, 25, 60 } ;

    printf("\n Functional Code Test 하기  \n") ;
    t1 = meta_fun( mysquare, 1, 10 ) ;
    printf("\n t1 = %d", t1 ) ;

	return 0;
}
