// >a.exe > g.txt로 하면 stdout으로 나오기 때문에
//  g.txt에 아무것도 출력되지 않는다.

#include <iostream>

using namespace std;

int main( ) {

   cout << "진짜 output " ;
   cerr << "\n An error occured in cerr file:";
   clog << "\n An error occured";

   return 0;
}
