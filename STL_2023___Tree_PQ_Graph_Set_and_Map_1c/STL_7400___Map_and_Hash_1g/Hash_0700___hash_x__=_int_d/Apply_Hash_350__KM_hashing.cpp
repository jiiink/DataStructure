#include <bits/stdc++.h>
#include <iostream>
#include <functional>
#include <string>
using namespace std ;


long long KM_hash(string const& s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 912345678912 ;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}


int main() {

    vector <string> genome { "a", "g", "agg", "gttcga", "agg", "aggc", "gttca", \
                             "ttagatagatatatagaagccc", "ttagatagatatatagaagccc",
                             "ttagatagatatatagaatccc"} ;
    for(auto w : genome) {
        cout << "long long KM_hash( " << w << " )= " << KM_hash(w) << endl;
    }

    return 0;
}
