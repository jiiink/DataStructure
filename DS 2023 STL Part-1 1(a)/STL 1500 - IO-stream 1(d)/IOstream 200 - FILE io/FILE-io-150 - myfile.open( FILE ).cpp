
#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ifstream iFile("people.txt");
    int i, age, isum ;
    string myline, name ;


    i = 0 ;
    while (!iFile.eof()) {
        i++ ;
        getline( iFile, myline ) ;
        //iFile >> name >> age  ;
        cerr << "i= " << i << "  myline = " << myline << endl;
    }

    return 0;
}
