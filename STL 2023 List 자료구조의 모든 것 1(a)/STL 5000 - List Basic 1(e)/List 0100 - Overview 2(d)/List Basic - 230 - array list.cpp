#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

    list< array<string,3> > slist    { { "말", "코"}, {"소주", "맥주", "와인" }, {"돼지국밥"} } ;

    for(auto A: slist) {
        cout << "\n row vector: " ;
        for(int i=0 ; i< 3 ; i++ ){
            cout << A[i] << ", " ;
        }
    }
} // end of main()
