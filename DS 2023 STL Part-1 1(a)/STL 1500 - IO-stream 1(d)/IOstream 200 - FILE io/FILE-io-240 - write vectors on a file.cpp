// 특정 파일에 쓰기

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main () {
  ofstream myfile;
  vector<int> data = { 22, 33, 44, 55, 66, 77, 88, 100} ;

  myfile.open ("newfile.txt");


  for(auto w : data ){
    myfile <<  w << endl ;
  }

  myfile.close();

  return 0;
}
