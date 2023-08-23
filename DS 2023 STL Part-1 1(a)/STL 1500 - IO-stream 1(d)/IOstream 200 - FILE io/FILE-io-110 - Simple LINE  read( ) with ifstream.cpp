// 특정 파일에 쓰기

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    ifstream myfile ("people.txt");

    int i = 0 ;
    if (myfile.is_open()) {
        while ( getline (myfile,line) ) {
            cout << "i= "<< ++i << "  : " << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";

    return 0;
}
