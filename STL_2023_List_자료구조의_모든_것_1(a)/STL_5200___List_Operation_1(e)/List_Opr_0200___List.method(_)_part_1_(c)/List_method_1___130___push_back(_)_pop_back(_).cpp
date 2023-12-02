#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define allout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

int main () {
    list<int> ml = { 10, 11, 12, 13 };


    allout("1. ml[]= ", ml) ;

    ml.push_front( 54);
    ml.push_back (-90);
    allout("2. ml[]= ", ml) ;

    ml.pop_back( );
    ml.pop_back( );
    ml.pop_back( );
    allout("3. ml[]= ", ml) ;
    return 0;

} // end of main()





