// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {

   map<string, string> Ger2Eng;

   Ger2Eng["one"] = "ein";
   Ger2Eng["beer"] = "Bier";
   Ger2Eng["station"] = "Bahnhof";
   Ger2Eng["pizza"] = "Pizza";
   Ger2Eng["room"] = "Raum";
   Ger2Eng["football"] = "FussBall";


   for(auto w : Ger2Eng) {
         printf("\n 영어 = %10s, 독일어 = %10s ", w.first.c_str(), w.second.c_str() ) ;
   }
   //allout(" Emplyees<>= ", Ger2Eng) ;

} // end of main()
