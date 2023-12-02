#include <string>
#include <iostream>
#include <iomanip>
#include <functional>
#include <bitset>
#include <vector>
using namespace std ;


int main() {
    bitset<8> b1("00111001");
    bitset<8> b2("10101001");

    string bit_string = "00110010";
    bitset<8> b3(bit_string);       // [0,0,1,1,0,0,1,0]
    bitset<8> b4(bit_string, 7);    // [0,0,0,0,0,0,1,0]
    bitset<8> b5(bit_string, 2, 3); // [0,0,0,0,0,0,0,1]

    vector < bitset<8> > vecbitset {b1, b2, b3, b4, b5 };
    hash<bitset<8>> bitset_hash;

    for(auto w : vecbitset ){
        cout << "\n hash( " << w << ") = " << bitset_hash( w ) ;
    }


    return EXIT_SUCCESS;
}
