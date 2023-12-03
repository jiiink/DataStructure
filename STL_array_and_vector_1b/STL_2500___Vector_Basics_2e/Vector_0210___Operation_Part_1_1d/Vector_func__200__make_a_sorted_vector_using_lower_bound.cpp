//
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

int   simseed = 12345 ;

int simhash2(unsigned int x, int M) {
    x = x*x + simseed  ;
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x%M;
}
#define N 15

int main() {
    system_clock time;
    duration<double, milli> diff_time;
    int ival ;

    vector <int> tvec ;

    for(int i=0; i < N ; i++){
       ival = simhash2(i,100) ;
       auto it = lower_bound(tvec.begin(), tvec.end(), ival) ;
       tvec.insert( it, ival ) ;
       allout("> tvec[]= ", tvec );
    }

} // end of main()
