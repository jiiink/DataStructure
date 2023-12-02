#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;


    vector< string > svect(n,  "PNU Prof. Zoh WOW"  );
    int i = 0 ;

    for ( auto w : svect)
        cout << "\n" << ++i << ": " << w << " ";


    return 0;
}
