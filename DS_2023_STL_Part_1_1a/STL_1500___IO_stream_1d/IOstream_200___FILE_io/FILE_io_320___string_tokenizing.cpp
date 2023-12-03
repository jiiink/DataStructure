#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<":- ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {

    string line = "We study how to parse    a string into a set of tokens";
    string tstr ;
    vector <string> tokens;
    stringstream check1(line);

    while(getline(check1, tstr, ' ')) {
        tokens.push_back( tstr );
    }

    allout(" tokens[]= ", tokens ) ;

}
