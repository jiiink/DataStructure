// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {

   map<int, string> Employees;

   Employees[5234] = "Mike C.";
   Employees[3374] = "Charlie M.";
   Employees[1923] = "David D.";
   Employees[7582] = "John A.";
   Employees[5328] = "Peter Q.";
   cout << "Employees[3374]=" << Employees[3374] << endl << endl;
   cout << "Map size: " << Employees.size() << endl;

   cout << "map의 모든 원소에 대하여 (Key, value)를 출력한다. \n\n" ;
   //ii는 map의  iterator
   for( auto ii = Employees.begin(); ii !=Employees.end(); ++ii) { // 낡은 방식
        cout << (*ii).first << ": " << (*ii).second << endl;
   }

   for(auto w : Employees) {
         printf("\n w.first= %d, %s ", w.first, w.second.c_str() ) ;
   }
   //allout(" Emplyees<>= ", Employees) ;

} // end of main()
