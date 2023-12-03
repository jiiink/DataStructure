// 특정 파일을 Token으로 잘라서 읽기

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>  //  stringstream을 사용하기위해서는 반드시 필요

using namespace std;

int main () {
    string   myline, token ;
    ifstream myfile ("rotary.txt");

    int i = 0 ;
    if (myfile.is_open()) {
        while ( getline (myfile, myline) ) {
           stringstream lineStream( myline) ;
           while(lineStream >> token)     {
               cout << "\n Token[ " << ++i << "]= " << token ;
           }
           // cout << "\n myline = " << myline ;
        }
        myfile.close();
    } else cout << "Unable to open file";

    return 0;
}
