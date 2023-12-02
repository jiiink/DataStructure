// 특정 파일을 Token으로 잘라서 읽기

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>  //  stringstream을 사용하기위해서는 반드시 필요

using namespace std;

int main() {

    ifstream inFile("rotary.txt");

    if (inFile.fail()) {
        cerr << "Unable to open file for reading." << endl;
        exit(1);
    }

    string nextToken;
    int i = 0 ;
    while (inFile >> nextToken) {
        cout << setw(3) <<  ++i << "-token: " << nextToken << endl;
    }

    inFile.close();

    return 0;
}

