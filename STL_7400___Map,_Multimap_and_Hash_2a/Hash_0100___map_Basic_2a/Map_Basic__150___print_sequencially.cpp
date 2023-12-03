// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    map <string, int> M ;

    M["book"]= 123 ;
    M["note"]=  67 ;
    M["Cold"]=  78 ;


    try {
        cout << "Non element M.at('note')=> " << M.at("note") << endl ;
    }
    catch (const out_of_range& oor) {
        cout << "\n 큰일 났네 ...Out of Range 오류가 발생했습니다. ";
        cerr << "\n 오류메시지: " << oor.what() << '\n';
    }

    /*

    try {
        cout << "Non element M.at('W')=> " << M.at("W") << endl ;
    }
    catch (const out_of_range& oor) {
        cout << "\n 큰일 났네 ...Out of Range 오류가 발생했습니다. ";
        cerr << "\n 오류메시지: " << oor.what() << '\n';
    }
    */


    cout << "외부에서 출력, Non element M.at('W')=> " << M.at("W") ;

    return 0 ;

}

