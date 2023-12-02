
// reading an entire binary file

#include <iostream>
#include <fstream>
using namespace std;

int main () {
    streampos size;
    char * memblock;

    ifstream file ("example.bin", ios::in|ios::binary|ios::ate);
    if (file.is_open()) {

        size = file.tellg();
        memblock = new char [size];
        file.seekg (0, ios::beg);
        file.read (memblock, size);
        file.close();

        cout << "example.bin이 메모리에 모두 올라가 있습니다. ";
        for(int i = 0 ; i <= 20 ; i++){
            cout << "\n memblock[ " << i << "]= " << memblock[i] ;
        }
        delete[] memblock;

    }
    else cout << "Unable to open file";
    return 0;
}
