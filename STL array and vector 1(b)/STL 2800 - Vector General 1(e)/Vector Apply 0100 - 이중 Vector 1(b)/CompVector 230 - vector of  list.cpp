#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

    vector< list<string> > listvec    { {"õµëÚÖÃ"}, { "İ£", "üÈ"}, {},  {"??", "Îı?", "Ğ©?" } } ;

    for(auto A: listvec) {
        cout << "\n Element list: " ;
        for(auto w : A ){
            cout << w << ", " ;
        }
    }
} // end of main()
