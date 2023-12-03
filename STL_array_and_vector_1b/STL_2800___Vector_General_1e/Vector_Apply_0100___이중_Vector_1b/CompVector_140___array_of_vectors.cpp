#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

    array< vector<int>, 3 > arrvec { { {3,4,5, 6, 7,8}, {32, 32, 33}, {7, 77, 77 } } } ;

    arrvec[0].push_back(100) ;
    arrvec.back().push_back(-1000) ;

    for(auto A: arrvec) {
        cout << "\n row vector: " ;
        for(auto w : A ) {
            cout << w << ", " ;
        }
    }
} // end of main()
