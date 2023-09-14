#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

    list< vector <string> > veclist    { {"促恩零"}, { "富", "恍"}, {},  {"绵备", "具备", "硅备" } } ;

    for(auto A: veclist ) {
        cout << "\n Element vector: " ;
        for(auto w : A ){
            cout << w << ", " ;
        }
    }
} // end of main()
