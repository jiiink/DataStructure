#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

    vector< array<string,3> > svec    { { "富", "恍"}, {"绵备", "具备", "硅备" } } ;

    for(auto A: svec) {
        cout << "\n row vector: " ;
        for(int i=0 ; i< 3 ; i++ ){
            cout << A[i] << ", " ;
        }
    }
} // end of main()
