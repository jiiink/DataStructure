
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  streampos fbegin, fend;
  ifstream myfile ("example.bin", ios::binary);

  fbegin = myfile.tellg();
  myfile.seekg (0, ios::end);
  fend = myfile.tellg();

  myfile.close();
  cout << "example.bin의 크기는 : " << (fend - fbegin) << " bytes.\n";

  return 0;
}
