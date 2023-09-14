#include <array>
#include <iostream>

using namespace std ;


int main() {

   array<int,    4> inum     {   2,    4,      6,    8};
   array<double, 8> dnum     { 3.5,  6.1, 553.01,   .12, \
                               5.4, -9.6,   0.08, 99.1 };
   cout << "iumb[1]=  " << inum[1] << '\n';

   inum[0] = 5;

   cout << "\n All inum:";
    for (auto i : inum) {
       cout << ' ' << i;
    }

   cout << "\n All dnum:";
    for (auto i : dnum) {
       cout << ' ' << i;
    }
}
