#include <bits/stdc++.h>
#include <algorithm>
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
    {1, 20, 31, 40, 50}, {33, 20, 50}, {33, 20 },
    {50, 40, 30, 20},    {  1, 51, 99, 10 },
    {50, 40, 30, 10},    { 33, 10, 30, 40, 50}, {100, 4} } ;

    sort( VV.begin(), VV.end() );


    showvv( VV );

    return 0;
}
