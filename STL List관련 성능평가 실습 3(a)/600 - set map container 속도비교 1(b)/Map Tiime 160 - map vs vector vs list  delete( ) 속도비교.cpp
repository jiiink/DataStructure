//
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
#define mapout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w.first<<", "
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
           auto itv = lower_bound(tvec.begin(),   tvec.end(),  ival) ;
           auto itl = lower_bound(tlist.begin(), tlist.end(), ival) ;
           tlist.insert( itl, ival ) ;
           tvec.insert ( itv, ival ) ;
           tmap[ival]= i ;
           //allout("> tvec[]= ", tvec) ;
        }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> data 준비하는 시간  : " << diff_time.count() <<endl;

    tbegin = time.now();
        for(int i=0; i < N ; i++){
           ival = simhash2(i, B ) ;
           auto itt =  find(tvec.begin(), tvec.end(), ival ) ;
           if( itt != tvec.end())
                tvec.erase( itt ) ;
                //allout("> tvec[]= ", tvec) ;
        }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> tvector에서 찾아서 지우는 시간   : " << diff_time.count() <<endl;

    tbegin = time.now();
        for(int i=0; i < N ; i++){
           ival = simhash2(i, B ) ;
           auto itm =  tmap.find(ival ) ; // map에서 find는 map.find()
           if( itm != tmap.end())
                tmap.erase( itm ) ;
                //mapout("> tmap[]= ", tmap) ;
        }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> tmap에서 찾아서 지우는 시간   : " << diff_time.count() <<endl;
} // end of main()
