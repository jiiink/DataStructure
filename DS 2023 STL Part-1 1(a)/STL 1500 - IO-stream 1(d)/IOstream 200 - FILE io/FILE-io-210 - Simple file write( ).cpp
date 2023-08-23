// 특정 파일에 쓰기

#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;

  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();

  return 0;
}
