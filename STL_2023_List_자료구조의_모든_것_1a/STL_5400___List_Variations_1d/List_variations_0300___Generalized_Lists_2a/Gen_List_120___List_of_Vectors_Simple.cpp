#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto _w : lx ) cout<< " " << _w ;
using namespace std;

int main() {


    list < vector<int> > lv ;   // list of vector
    list < vector<int> >::iterator itlv ;

    vector<int>   itemp ;
    vector<int>   iva { 4, 5, 6, 7, 8} ;
    vector<int>   ivb { 24, 15,  -96,-7,48 } ;
    vector<int>   ivc { 4, -5, -6, -7, -8} ;
    vector<int>   ivd { 4, 8, 77, 67} ;
    vector<int>   ive { 3 } ;

    lv.push_back( iva ) ;
    lv.push_back( ivb ) ;
    lv.push_back( ivc ) ;
    lv.push_back( ivd ) ;
    lv.push_back( ive ) ;

    lv.sort( ) ;

    int count = 0 ;
    for(auto w: lv){
         Outlist( to_string(++count), w );
    }




} // end of main()
