#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;

int main( ) {

    list<string> colours = {"red",    "blue", "green",     "grey",  "pink", "violet"};
    char const *x[] =      {"banana", "apple", "papaya", "orange", "melon"};

    list<string> xcolours(x, x + sizeof(x) / sizeof(*x));
    cout << sizeof(x)  << endl ;
    cout << sizeof(*x) << endl ;

    allout("List  colours ",  colours) ;
    allout("List xcolours ", xcolours) ;

    return 0;


}  // end of main( )
