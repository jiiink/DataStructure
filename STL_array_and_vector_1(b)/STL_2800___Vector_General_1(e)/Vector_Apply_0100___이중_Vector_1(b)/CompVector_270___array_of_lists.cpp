#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

    array< list<int>, 3 > arrlist { { {3,4,5}, {11, 12, 13, 14}, {27, 28, 29} } } ;

    arrlist.front().push_front(100) ;
    arrlist.front().push_front(101) ;
    arrlist.back().push_back(-1000) ;

    for(auto A: arrlist ) {
        cout << "\n array element : " ;
        for(auto w : A ) {
            cout << w << ", " ;
        }
    }
} // end of main()
