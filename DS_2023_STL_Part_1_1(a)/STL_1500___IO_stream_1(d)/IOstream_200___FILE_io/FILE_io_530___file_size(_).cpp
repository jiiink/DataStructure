// 파일의 크기를 구해 봅시다.

#include <iostream>
#include <fstream>
using namespace std;

int main () {

  streampos sbegin, send;
  ifstream myfile ("example.bin", ios::binary);

  sbegin = myfile.tellg();
  myfile.seekg (0, ios:: end);
  send = myfile.tellg();
  myfile.close();

  cout << "size is: " << (send-sbegin) << " bytes.\n";
  return 0;
}
