#include <iostream>
#include <set>
#include <functional>
#include <stdlib.h>
using namespace std;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "


int main() {

    set<int> s  {  7, 7, 11, 20, 1, 1, 3, 4, 5, 6, 25} , t ;

    t = s ;
    t.insert(99);
    allout("set<int> s ", s ) ;
    allout("set<int> t ", t ) ;
}
