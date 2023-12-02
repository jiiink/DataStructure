

#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/io.hpp>
#include <boost/assign/std/vector.hpp>
#include <iostream>

using namespace boost::assign;
using namespace boost::numeric::ublas;

int main() {

    std::vector<int  > v;

    v += 1,2,3,4,5,6,7,8,9,10;
    std::cout << "\n Boost vector\n" ;
    for(auto w : v) std::cout << w << " ," ;

}
