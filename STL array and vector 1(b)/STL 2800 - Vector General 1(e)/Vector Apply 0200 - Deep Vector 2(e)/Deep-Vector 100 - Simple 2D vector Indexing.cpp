#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;



int main() {

    vector< vector <int> > deep_vec { {3,4,5}, {32, 32, 33}, {77},  \
                                {101, 102, 103,104}, {1000,1010}} ;


    for( auto  welem : deep_vec ) {
         cout << " \n >> " ;
         for( auto q : welem ) {
            cout << q  << ", ";
         }
    }

} // end of main()
