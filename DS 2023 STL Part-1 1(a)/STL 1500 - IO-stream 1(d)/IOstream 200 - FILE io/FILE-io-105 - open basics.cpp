
#include <iostream>     // cout
#include <fstream>      // ifstream
using namespace std ;


int main () {
  ifstream ifs;
  string my ;

  ifs.open ("people.txt", ifstream::in);

  int i = 0 ;
  while (ifs.good()) {
    ifs >> my ;
    cout << "\n token[ "<< i << "]= " << my << endl ;
  }

  ifs.close();

  return 0;
}

