#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<", "
using namespace std;

void print( vector<int> const &v) {
    for (int i: v) {
        cout << i << ' ';
    }
}

int main() {
    vector<int> v, v2 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

    unsigned seed = 12345 ;
    v = v2 ;
    shuffle (v.begin(), v.end(), std::default_random_engine(seed));
    cout << "\n random shuffle (12345): " ;
    print(v);

    v = v2 ;
    seed = 5678 ;
    shuffle (v.begin(), v.end(), std::default_random_engine(seed));
    cout << "\n random shuffle (5678): " ;
    print(v);

    v = v2 ;
    shuffle (v.begin(), v.end(), std::default_random_engine(seed));
    cout << "\n random shuffle (5678): " ;
    print(v);
    return 0;
}
