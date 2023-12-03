#include <bits/stdc++.h>
#include <algorithm>
#include <functional>
using namespace std ;

void showvv( vector< vector<int> > Q ){
    int i,j,k ;
    i = j = 0 ;
    for( auto U : Q ){
        for( auto v : U ) {
            printf(" %3d", v) ;
            j++ ;
        }
        cout << "\n";
        i++; j=0 ;
    }
} // end of showit( )

int main () {
    vector< vector<int> >  VV {
    {1,  20, 31, 40 },
    {23, 33, 42, 50},
    {15, 51, 69, 88 },
    {15, 20, 30, 50},
    {15, 51, 69, 84 },
    {65, 66, 67, 68 },
    {15, 30, 40, 50} } ;

    sort( VV.begin(), VV.end(), greater< vector<int>>() );
    // reverse( VV.begin(), VV.end() ) ;


    showvv( VV );

    return 0;
}
