#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

void showvv( vector< vector<int> > Q ){
    int i,j,k ;  i = j = 0 ;
    for( auto U : Q ){
        for( auto v : U ) {
            printf(" %2d, ", v) ; j++ ;
        } printf(" / ");
        i++; j=0 ;
    }
} // end of showit( )


int main() {

    vector < vector<int> > v1 = { {15},      {22, 33}, {66}, {0,1  }} ;
    vector < vector<int> > v2 = { {15, 22},  {33, 66}, {67}, {0,1,2}} ;
    vector < vector<int> > v3 = { {22, 33},            {66}         } ;
    vector < vector<int> > v4 = { {12, 35},                  {0,1,2}} ;
    vector < vector<int> > v5 = { {12, 35},                  {  1,2}} ;
    vector < vector<int> > v6 = { {22, 33}, { { } }  , {66}         } ;
    vector < vector<int> > v7 = { {22, 33}, { }      , {66}         } ;
    vector < vector < vector<int> > > Allvec { v1, v2, v3, v4, v5, v6, v7 };


    sort( Allvec.begin(), Allvec.end() ) ;
    for( auto w : Allvec ) {
        cout << "\n ---\n " ;
        showvv( w ) ;
    }

} // end of main ( )
