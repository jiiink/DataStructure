#include <iostream>
#include <iomanip>
using namespace std;
int main () {
  cout << setfill ('*') << setw (10);
  cout << 15 << endl;
  cout << setfill ('#') << setw (5);
  cout << 5 << endl;
  cout << setfill ('#') << setw (5);
  cout << 1 << endl;
  cout << setfill ('*') << setw (10);
  cout << 25 << endl;
  return 0;
}
