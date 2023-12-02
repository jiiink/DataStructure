
#include <iostream>     // cout
#include <fstream>      // ifstream
using namespace std ;


int main () {
  ifstream ifs;
  string my ;

  ifs.open ("people.txt", ifstream::in);

  char c = ifs.get();

  while (ifs.good()) {
    cout << c;
    c = ifs.get();
  }

  ifs.close();

  return 0;
}

