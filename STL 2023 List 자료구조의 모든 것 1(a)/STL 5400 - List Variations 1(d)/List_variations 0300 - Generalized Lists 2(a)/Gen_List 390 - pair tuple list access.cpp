#include <bits/stdc++.h>
using namespace std;

list < pair < int, string > > alist;
list < tuple< int, string > > blist;


int main() {

    auto t = make_tuple(1,"something");
    blist.push_back( t ) ;

    cout << " \n\n get<0>(t) = " << get<0>(t);
    //will get the first element of the tuple

} // end of main( )


