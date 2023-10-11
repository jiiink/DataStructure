#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define allout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

int main () {
    list<int> ml = { 100, 110, 120, 130, 140, 150, 160 };


    allout("1. ml[]= ", ml) ;

    ml.push_front(32);
    allout("2. ml[]= ", ml) ;

    ml.pop_front( );
    ml.pop_front( );
    ml.pop_front( );
    allout("3. ml[]= ", ml) ;
    return 0;

} // end of main()





