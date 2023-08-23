#include <cstdio>  // 반드시 이 library를 사용해야 한다.
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
   long double d = 0.12345678910;
   cout << fixed;
   cout << setprecision(12) << d;
   return 0;
}
