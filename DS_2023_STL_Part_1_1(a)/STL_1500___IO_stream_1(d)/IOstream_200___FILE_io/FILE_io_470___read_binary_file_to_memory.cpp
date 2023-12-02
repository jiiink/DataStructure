// reading an entire binary file
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main () {
  streampos size;
  char * memblock;

  ifstream file ("example.bin", ios::in|ios::binary|ios::ate);

  if (file.is_open()) {
    size = file.tellg();
    memblock = new char [size];
    file.seekg (0, ios::beg);
    file.read (memblock, size);
    file.close();

    cout << "\n the entire file content is in memory";
    cout << "\n memblock = " << memblock ;
    cout << "\n memblock[]의 크기 : " <<  sizeof(  memblock ) ;// pointer의 크기
    cout << "\n  strlen( memblock) : " <<  strlen( memblock) ;
    delete[] memblock;
  }
  else
    cout << "Unable to open file";
  return 0;
}
