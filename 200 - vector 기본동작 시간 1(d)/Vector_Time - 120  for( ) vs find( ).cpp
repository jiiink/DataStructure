#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>
#include <random>
#define  N 200000
#define  M  10000
using namespace std;
using namespace chrono;

using in_secs = duration <double,milli>;

vector<int> myvec, yourvec ;
list  <int> mylist;


void set_data(){
    double myrand ;
    for(int i=0; i < N ; i++){
        myrand = rand( )/RAND_MAX  ;
        myvec.push_back ( myrand ) ;
        myrand = rand( )/RAND_MAX  ;
        mylist.push_back( myrand ) ;
    }
    mylist.sort() ;
    yourvec = myvec ;
    sort(myvec.begin(), myvec.end()) ;
} // end of set_data()

int main() {
    system_clock time;
    in_secs diff_time;

    auto tbegin = time.now(), tend   = time.now();

    srand( 20221 );


    cout << "Number of Steps = " << N << endl ;
    set_data() ;

    tbegin = time.now();
    for(auto w : mylist ) {
            for(auto it=myvec.begin(); it !=myvec.end(); it++){
                if( *it == w ) break ;
            }
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n> Search for( ) loop on sorted myvec : " << diff_time.count() << endl;


    tbegin = time.now();
    for(auto w : mylist ) {
            for(auto it=yourvec.begin(); it !=yourvec.end(); it++){
                if( *it == w ) break ;
            }
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n> Search for( ) loop on unsorted yourvec : " << diff_time.count() << endl;


    for(auto w : mylist ) {
                find( myvec.begin(), myvec.end(), w ) ;
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n> Search generic find( ) on sorted myvec : " << diff_time.count() << endl;

    for(auto w : mylist ) {
                find( yourvec.begin(), yourvec.end(), w ) ;
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n> Search generic find( ) on unsorted yourvec : " << diff_time.count() << endl;

    return 0;


} // end of main()
