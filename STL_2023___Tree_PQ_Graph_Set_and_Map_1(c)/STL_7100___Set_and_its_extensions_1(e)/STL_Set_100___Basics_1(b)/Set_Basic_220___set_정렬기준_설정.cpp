#include <iostream>
#include <string>
#include <set>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {
    auto lexical_compare = [](int a, int b) { return to_string(a) < to_string(b); };
    set<int, decltype(lexical_compare)> s(lexical_compare);
    set<int> maset { 1, 10, 901, 100, 18765, 231, 1230} ;

    s.insert(1);
    s.insert(10);
    s.insert(901);
    s.insert(100);
    s.insert(187670);
    s.insert(0100);
    s.insert(231);
    s.insert(1230);

    allout("lexical order s{}=", s ) ;

    allout("maset{}= ", maset ) ;

    return 0;
}
