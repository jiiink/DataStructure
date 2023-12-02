// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
using namespace std;

int main() {

   map<string, int> months;

    months["january"    ] = 31;
    months["february"   ] = 28;
    months["march"      ] = 31;
    months["april"      ] = 30;
    months["may"        ] = 31;
    months["june"       ] = 30;
    months["july"       ] = 31;
    months["august"     ] = 31;
    months["september"  ] = 30;
    months["october"    ] = 31;
    months["november"   ] = 30;
    months["december"   ] = 31;


   string  my="december";

   months["banana"] = 9000 ;
   cout  << my << "달의 날 수 = " << months[ my] ;

   for(auto w : months) {
    cout << "\n " << setw(10) << w.first << setw(5)  << w.second ;
   }

} // end of main()
