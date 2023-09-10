#include <iostream>     // cout
#include <algorithm>    // generate
#include <vector>       // vector
#include <ctime>        // time
#include <cstdlib>      // rand, srand
#define allout(MSG,X)   cout<<"  "<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std ;


int main() {
    int a = 45678*678, b = 1426*678;
    int gcd_result = __gcd(a, b);

    cout << "최대공약수: " << gcd_result << std::endl;

    return 0;
}
