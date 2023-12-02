#include <bits/stdc++.h>
#define allout(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


int main() {
    vector<int> reference = {3,4,5,6,7};
    vector<int> value = {6,7,8,9};

    int i = 1;
    int e = 3;
    if(all_of(reference.cbegin() + i - 1, reference.cbegin() + e + 1, \
                            [&value, &i](int ref) {
    return ref < value[i];
    })) {
        cout << "value[" << i << "] greater than all reference[" ;
        cout << i-1 << "] to reference [" << e << "]" << endl;
    }
}
