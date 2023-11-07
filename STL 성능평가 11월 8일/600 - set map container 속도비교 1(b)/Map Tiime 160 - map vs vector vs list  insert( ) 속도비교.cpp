//
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
#define mapout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w.first<<", "
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

// 순서 sorted를 유지하면서 정확한 위치에 insert( )하기

int   simseed = 12345 ;

int simhash2(unsigned int x, int M) {
    x = x*x + simseed  ;
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x%M;
}
//#define N 20
//#define B 100

#define N 10000
#define B 100000

int main() {
    system_clock time;
    system_clock::time_point tbegin, tend ;
    duration<double, milli> diff_time;
    int ival ;

    vector <int>     tvec ;
    map    <int,int> tmap;
    list   <int>     tlist ;


    tbegin = time.now();
        for(int i=0; i < N ; i++){
           ival = simhash2(i, B ) ;
           auto it = lower_bound(tvec.begin(), tvec.end(), ival) ;
           tvec.insert( it, ival ) ;
           //allout("> tvec[]= ", tvec) ;
        }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> tvec.insert( ) time  : " << diff_time.count() <<endl;

    tbegin = time.now();
        for(int i=0; i < N ; i++){
           ival = simhash2(i, B ) ;
           tmap[ival]= i ;
           //mapout("> tmap[]= ", tmap) ;
        }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> tmap.insert( ) time  : " << diff_time.count() <<endl;

    tbegin = time.now();
        for(int i=0; i < N ; i++){
           ival = simhash2(i, B ) ;
           auto it = lower_bound(tlist.begin(), tlist.end(), ival) ;
           tlist.insert( it, ival ) ;
          // allout("> tlist[]= ", tlist) ;
        }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> tlist.insert( ) time  : " << diff_time.count() <<endl;
} // end of main()
