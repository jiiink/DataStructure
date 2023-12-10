// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;



int main() {
    map < int, char> m1 = {
        {13, 'A'}, {22, 'y'}, {91, '$'},
        {72, 'B'}, {87, '%'}, { 7, 'c'},
        {30, 'Z'}
    };

    m1[234]='W' ;

    for(auto w : m1){
        cout << "m1[" << setw(3) << w.first << "] = " << w.second << endl ;
    }
    return 0;
}
