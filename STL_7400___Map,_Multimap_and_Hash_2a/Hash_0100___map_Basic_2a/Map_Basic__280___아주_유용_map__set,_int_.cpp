// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;



int main() {
    map < set<int>, char> setmap = {
        {{13,3}, 'A'}, {{1,2,3,22}, 'y'}, {{100,102}, '$'}  };

   setmap[{2,3,4}]='W' ;

   cout <<  setmap[{2,3,4}] ;

   for(auto w : setmap ){
        cout << "\n Key= " ;
        for(auto zw: w.first ) cout  << zw << ", " ;
        cout << "  value= " << w.second ;
   }
   return 0;
}
