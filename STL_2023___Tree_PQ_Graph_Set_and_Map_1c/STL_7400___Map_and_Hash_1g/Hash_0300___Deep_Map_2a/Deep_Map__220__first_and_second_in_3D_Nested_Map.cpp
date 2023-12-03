// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
#include <bits/stdc++.h>
using namespace std ;

int main() {
    map< int, map<int, string > >       m1  = { {54, { {23, "Apple"} } } } ;
    map< pair<int, int>, string >       m2;
    map< string,  map<string, float > > m3 {  {"Rooper",  { {"Cat", 34.56}, \
                                                            {"X", 0.1}
                                                          }
                                              } ,
                                              {"Boxer ",  { {"Dog", 12.001}, \
                                                             {"Y", 0.71}
                                                          }
                                              }
                                           };   // end of m3( )
    map< pair<int, int>, string >       m4;

    map<int, string >  sm = { {54, "Killer"}} ;
    pair < int,    int   >  ipair ;
    pair < string, string>  spair ;

    m1[54][23]= "Coke Cola" ;
    m1[11][ 6]= "Korea Cider" ;
    m1[11][ 9]= "IPA Knife" ;
    m1[11][50]= "Coffee Cup" ;

    auto it= m1.begin() ;

    cout << "\n m1의 first = " << it->first ;
    sm = it->second ;
    for( auto ii = sm.begin(); ii != sm.end(); ii++ ){
        cout << "\n " << ii->first << " ; " << ii-> second ;
    }

    return 0;
}
