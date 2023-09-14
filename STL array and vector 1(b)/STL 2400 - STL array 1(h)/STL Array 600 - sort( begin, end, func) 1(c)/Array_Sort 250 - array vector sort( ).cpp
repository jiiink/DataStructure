#include <bits/stdc++.h>
using namespace std ;


int main () {
    array<int,5> a = {10, 20, 30        };
    array<int,5> b = {10, 20, 30, 40, 30};
    array<int,5> c = {10, 21, 30, 10    };
    array<int,5> d = { 5, 20, 32, 20,  5};
    array<int,5> e = { 5, 30, 20, 10};
    array<int,5> f = { 5, 20, 30, 20    };

    vector < array<int,5> > arrvec { a, b, c, d, e, f } ;

    sort( arrvec.begin(), arrvec.end()) ;

    for(auto warr : arrvec ){
        cout << "\n " ;
        for(auto w : warr ){
            cout << w << ", " ;
        }
    }

   return 0;
}
