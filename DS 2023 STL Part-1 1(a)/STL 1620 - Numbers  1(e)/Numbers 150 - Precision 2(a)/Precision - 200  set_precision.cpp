#include <cstdio>  // 반드시 이 library를 사용해야 한다.
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
   long double d = 0.12345678910;
   cout << "\n d= " << d  ;
   cout << "\n d - 0.12345678910= "<< d - 0.12345678910  ;
   cout << "\n setprecesion( 4)= " << setprecision( 4) << d;
   cout << "\n setprecesion( 8)= " << setprecision( 8) << d;
   cout << "\n setprecesion(12)= " << setprecision(12) << d;
   return 0;
}
