
#include <iostream>
#include <fstream>
using namespace std;


int main() {
    ifstream myfile("people.txt");
    int i, age, isum ;
    string myline, name ;


    i = 0 ;
    while (!myfile.eof()) {
        i++ ;
        getline( myfile, myline ) ;
        //iFile >> name >> age  ;
        cerr << "i= " << i << "  myline = " << myline << endl;
    }

    myfile.close( );
    //myfile.clear( );

    myfile.open ("people.txt"); // 다시 엽니다.

    cout << "\n 이제는 Token으로 읽어 봅시다. " ;
    while (!myfile.eof()) {
        i++ ;
        // getline( iFile, myline ) ;
        myfile >> name >> age  ;
        cerr << "i= " << i << "  name= " << name << ", age= " << age*10 << endl;
    }

    return 0;
}
