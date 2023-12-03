

#include <boost/fusion/container/set.hpp>
#include <boost/fusion/include/set.hpp>
#include <boost/fusion/container/set/set_fwd.hpp>
#include <boost/fusion/include/set_fwd.hpp>

int main() {

    typedef set<int, float> S;
    S s(12, 5.5f);
    std::cout << at_key<int>(s) << std::endl;
    std::cout << at_key<float>(s) << std::endl;
    std::cout << result_of::has_key<S, double>::value << std::endl;


} // end of main( )
