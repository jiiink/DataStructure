#include <bits/stdc++.h>
using namespace std ;

int    ipow(int, int) ;
string int2bin(int) ;

int main(){
   int w ;
   string ws ;

   ws = int2bin(1020) ;
   cout << "\n ws = " << ws ;
} // end of main( )


string int2bin(int w){
     string ts, result =

     while( w ){
        ts =  to_string(w&1);
        result = ts + result ;
        w >>= 1;
        printf("\n w= %d,  ts=%s", w, ts.c_str() ) ;
     }
     return result ;
} // end of int2bin()


int ipow(int  base, int exp) {
    int result = 1;
    for (;;) {
        // printf("\n ipow: exp= %d, result=%d", exp, result ) ;
        if (exp & 1) result *= base;
        exp >>= 1;
        if (!exp) break;
        base *= base;
    }
    return result;
}  // end of ipower
