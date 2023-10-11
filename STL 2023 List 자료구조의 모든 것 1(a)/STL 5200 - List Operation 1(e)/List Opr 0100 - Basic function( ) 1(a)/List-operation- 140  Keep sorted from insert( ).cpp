//
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

int   simseed = 123456 ;

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

    list <int> tlist ;

    for(int i=0; i < N ; i++){
       ival = simhash2(i,100) ;
       auto it = lower_bound(tlist.begin(), tlist.end(), ival) ;
       tlist.insert( it, ival ) ;
       allout("> tvec[]= ", tlist );
    }

} // end of main()
