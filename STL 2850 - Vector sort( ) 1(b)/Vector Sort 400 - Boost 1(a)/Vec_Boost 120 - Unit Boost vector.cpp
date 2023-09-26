// https://www.boost.org/doc/libs/1_52_0/libs/numeric/ublas/doc/vector.htm

#include <bits/stdc++.h>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>
using namespace boost::numeric::ublas;
using namespace std ;

int main () {

    int n = 10 ;

    for (int i = 0; i < n; ++ i) {
        unit_vector<double> v (n, i);
        cout << " " << v << endl;
    }
}
