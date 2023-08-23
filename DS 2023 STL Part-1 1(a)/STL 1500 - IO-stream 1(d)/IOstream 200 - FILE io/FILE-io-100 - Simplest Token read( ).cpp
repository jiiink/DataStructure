#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream iFile("gnumbers.txt");    // input.txt has integers, one per line
    int i,x;

    while ( iFile >> x ) {
           cout << "i= " << ++i << "  numbers = " << x << endl;
    }

    return 0;
}

/*  gnumbers.txt

74 8
51 -65
-38
12   5    45
33  8 90

*/
