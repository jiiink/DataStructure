#include <bits/stdc++.h>
using namespace std;

#include "mytool.h"
typedef  vector<int> vecin ;

int main() {
    vector <int> myv {1,2,3,4,5} ;
    map < vector<int>, string >  M  { { {1,2,3,4,5}, "GoodBoy" } };

    cout << "\ntest 1 = " << M[myv] << endl ;
    cout << "\ntest 2 = " << M[{1,2,3,4,5}] << endl ;
    cout << "\ntest 3 = " << M[{1,2,3,4}] << endl ;
    return 0 ;
}
