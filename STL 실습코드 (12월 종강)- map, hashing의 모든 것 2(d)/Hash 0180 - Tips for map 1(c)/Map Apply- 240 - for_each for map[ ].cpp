#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() {
    map<string,double> color { \
          { "red", 9.9 }, { "blue", 3.17 },
          { "yellow", -0.1 }, { "green", 5.4 },
          { "magenta", 0.77 }
   } ;

    color["norang"]= 4.5 ;

    // 원소 값을 제곱하여 수정함. :
   for(auto w : color ) {
         w.second *= w.second ;
   };

    // print each element:
    for(auto w : color ) {
        printf("\n color[ %9s ] = %f", w.first.c_str(),  w.second ) ;
    };

    return 0 ;
}
