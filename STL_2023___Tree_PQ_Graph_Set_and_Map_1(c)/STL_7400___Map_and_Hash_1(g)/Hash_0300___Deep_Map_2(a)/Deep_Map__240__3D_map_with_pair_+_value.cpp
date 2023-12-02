#include <bits/stdc++.h>
using namespace std ;

typedef pair<string, string> Spair ;

int main() {
    Spair w ;
    map< Spair, float > my ;

    w = make_pair("good", "bad") ;

    my[w]= 9.045 ;

    cout << "\n w.first = "  << w.first ;
    cout << "\n w.second = " << w.second ;
    cout << "\n my[w] =  = " << my[w] ;
    return 0;
}
