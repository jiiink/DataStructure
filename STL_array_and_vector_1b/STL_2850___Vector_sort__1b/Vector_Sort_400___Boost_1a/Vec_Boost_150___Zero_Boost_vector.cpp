// https://www.boost.org/doc/libs/1_52_0/libs/numeric/ublas/doc/vector.htm

#include <bits/stdc++.h>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>
using namespace boost::numeric::ublas;
using namespace std ;


int main () {
    using namespace boost::numeric::ublas;
    zero_vector<double> v (10);
    std::cout << v << std::endl;
}
