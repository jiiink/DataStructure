#include <functional>
#include <bits/stdc++.h>
#include <random>
using namespace std ;


int main(){
    random_device rd;
    mt19937 e2(rd());
    uniform_real_distribution   <> dist(0, 10000);
    double fval ;
    cout.precision(10) ;

    for(int lindex =0 ; lindex < 100 ; lindex++) {
            fval = dist(e2) ;
            cout << "\n fval " << fval ;
    } // end of for i
	return 0;
}
