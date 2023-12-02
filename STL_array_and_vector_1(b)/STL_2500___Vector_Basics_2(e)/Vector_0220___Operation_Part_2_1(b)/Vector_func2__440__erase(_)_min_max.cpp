#define  vout(msg,x)    cout<<"\n"<<msg;for(auto s:x) cout << "  " << s ;
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec = { 13, 44, 52, 26, 78, 90, 51, 83 };

    vout("> ÁÖ¾îÁø vec : ", vec);

    vec.erase(max_element(vec.begin(), vec.end()));
    vout("> erase max : ", vec);

    vec.erase(min_element(vec.begin(), vec.end()));
    vout("> erase min : ", vec);

    vec.erase(max_element(vec.begin(), vec.end()));
    vout("> erase max : ", vec);
}
