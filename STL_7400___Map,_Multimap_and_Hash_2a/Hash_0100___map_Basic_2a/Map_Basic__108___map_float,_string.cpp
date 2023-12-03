// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {

   map< float, string> Employees;
   float Tf ;

   Employees[52.34] = "Mike C.";
   Employees[3.374] = "Charlie M.";
   Employees[192.3] = "David D.";
   Employees[758.2] = "John A.";
   Employees[0.5328] = "Peter Q.";
   cout << "Employees[3.374]=" << Employees[3.374] << endl << endl;
   cout << "Map size: " << Employees.size() << endl;

   cout << "map의 모든 원소에 대하여 (Key, value)를 출력한다. \n\n" ;
   //ii는 map의  iterator
   for( auto ii = Employees.begin(); ii !=Employees.end(); ++ii) { // 낡은 방식
        cout << (*ii).first << ": " << (*ii).second << endl;
   }

   cout << "\n map[]의 새로운 출력 방식 - " ;
   for(auto w : Employees) {
         printf("\n w.first= %f, %s ", w.first, w.second.c_str() ) ;
   }
   //allout(" Emplyees<>= ", Employees) ;

} // end of main()
