// https://www.boost.org/doc/libs/1_52_0/libs/numeric/ublas/doc/vector.htm

#include <bits/stdc++.h>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>
using namespace boost::numeric::ublas;


int main () {

    vector <complex<double>> v(3);
    for (unsigned i = 0; i < v.size (); ++ i)
        v (i) = complex<double> (i, i);

    std::cout << - v      << std::endl;
    std::cout << conj (v) << std::endl;
    std::cout << real (v) << std::endl;
    std::cout << imag (v) << std::endl;
    std::cout << trans(v) << std::endl;
    std::cout << herm (v) << std::endl;
}
