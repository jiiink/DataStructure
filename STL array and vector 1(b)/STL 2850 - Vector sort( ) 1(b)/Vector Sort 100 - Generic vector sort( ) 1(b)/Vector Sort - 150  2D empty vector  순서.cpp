#include <bits/stdc++.h>
using namespace std;

void showvv( vector< vector<int> > Q ){
    int i,j,k ;  i = j = 0 ;
    for( auto U : Q ){
        if( U.empty()) {
            printf(" O") ;
        }
        for( auto v : U ) {
            printf(" %2d, ", v) ; j++ ;
        } printf(" / ");
        i++; j=0 ;
    }
} // end of showit( )


int main() {

    vector < vector<int> > v1 = { { }, { }, { }, { }} ;
    vector < vector<int> > v2 = { { }, {1,2}, { }, { }} ;
    vector < vector<int> > v3 = { { }, { }} ;
    vector < vector<int> > v4 = { { }, { }, { }} ;
    vector < vector<int> > v5 = { {1,2}, { }, { }} ;
    vector < vector<int> > v6 = {              } ;
    vector < vector<int> > v7 = { { }, { }, { }, { }, { } } ;

    vector < vector < vector<int> > > Allvec { v1, v2, v3, v4, v5, v6, v7 };


    sort( Allvec.begin(), Allvec.end() ) ;
    int i=0 ;
    for( auto w : Allvec ) {
        cout << "\n " << ++i << " : ";
        showvv( w ) ;
    }

} // end of main ( )
