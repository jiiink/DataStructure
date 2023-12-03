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
    vector< vector<int> >  vec2d {
    {1, 20, 31, 40, 50},  {33, 20, 50},
    {50, 33, 20 },       {50, 42, 31, 20},    {  1, 51, 99, 10 },
    {50, 40, 30, 10},    { 33, 10, 30, 40, 50},   { 32, 10, 39, 40, 50},
    {100, 6},  {100, 10, 4},  {100, 10, 5} } ;

    for(auto &vec1d  : vec2d ){
        sort( vec1d.begin(), vec1d.end() ) ;
    }

    sort( vec2d.begin(), vec2d.end() );


    showvv( vec2d );

    return 0;
}
