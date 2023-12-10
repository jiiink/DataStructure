// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
// Have g++ follow the C++11 ISO C++ language standard
#include <map>
#include <iostream>
using namespace std;

int main() {
    int x, y ;
    map<int, map<int, int> > mymap;

    mymap[8][ 2] = 17;
    mymap[7][ 3] = 37;
    mymap[9][ 5] = 57;
    mymap[9][99] = -7;

    x=9 ; y= 8 ;
    cout << "mymap[9][10]= " << mymap[x][y] << endl;

    if (mymap.find(x) != mymap.end() && mymap[x].find(y) != mymap[x].end()) {
        cout << "\n My map contains a value for ["<<x<<" ," << y<<"] =" << mymap[x][y] << endl;
    }
    else {
        cout << "\n My map does not contain a value for [x][y]" << endl;
    }

    return 0;
}
