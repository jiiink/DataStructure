#include <bits/stdc++.h>
using namespace std;


int main() {

    string mstr = "Good Boy" ;
    map <string,int> w;
    w["Buchman"]= 100 ;
    w["Goliath"]=  56 ;
    w["Allia  "]=  45 ;
    w["Fredic "]=  91 ;

    printf("\n String print mstr = %s ", mstr.c_str() ) ;

    for( const pair< string,int>& p : w )
      printf( "\n w[%s] => %d\n", p.first.c_str(), p.second ) ;


    return 0 ;
}

