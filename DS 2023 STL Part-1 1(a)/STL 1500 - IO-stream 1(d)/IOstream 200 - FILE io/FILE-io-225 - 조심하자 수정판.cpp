#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream iFile("numbers.txt");    // input.txt has integers, one per line
    int i,x;

    while ( 1 ) {
        iFile >> x;
        if( iFile.eof( )) break ;
        cerr << "i= " << ++i << "  numbers = " << x << endl;
    }

    return 0;
}

//  90을 한번더 읽는다.
/*  numbers.txt
74
51
-65
-38
12
45
33
8
90

*/
