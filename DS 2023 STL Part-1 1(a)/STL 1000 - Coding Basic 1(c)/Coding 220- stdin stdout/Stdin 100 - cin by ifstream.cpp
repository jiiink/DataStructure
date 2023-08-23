#include <iostream>
#include <fstream>
#include <string>
#include <queue>
using namespace std;

int main () {

    string name ;
    int age ;



    ifstream cin ("people.txt");

    while( cin >> name >> age ) {
           cout << "\n" <<  name << " " << age ;
    }

    cin.close() ;

    return 0;
}
