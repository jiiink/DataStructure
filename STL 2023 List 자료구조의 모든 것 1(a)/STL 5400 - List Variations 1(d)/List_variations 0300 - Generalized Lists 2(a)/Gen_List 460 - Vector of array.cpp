#include <bits/stdc++.h>
#define allout(msg,lx)  cout<<"\n"<<msg<<" : ";for(auto w : lx ) cout<< " " << w ;
using namespace std;

int num[]={ 11,12,13, 14, 15, 16, 17, 18, 19, 20 } ;

int main() {
    int i,j ;
    vector< int( * )[5] > Arrays; //vector of pointers-to-arrays, like so:
    vector< int * > Arrayt; // vector of pointers that allocate an array dynamically,

    Arrayt.push_back( new int[5] );
    printf("\n Size of num[] = %d ", sizeof(num)/4 ) ;

    allout(" Arrayt[]= ", Arrayt) ;


} // END OF MAIN( )

