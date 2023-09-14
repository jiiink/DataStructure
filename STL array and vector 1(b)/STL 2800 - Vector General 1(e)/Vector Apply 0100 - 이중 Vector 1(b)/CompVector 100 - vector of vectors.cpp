#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

    vector< vector <int> > devec { {3,4,5}, {32, 32, 33}, {77},  \
                                {101, 102, 103,104}, {}, {-93, -90}} ;


    for(auto A: devec) {
        cout << "\n row vector: > " ;
        for(auto w: A){
            cout <<  w << ", " ;
        }
    }
} // end of main()
