#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<", "
using namespace std;

void print( vector<int> const &v) {
    for (int i: v) {
        cout << i << ' ';
    }
}

int main() {
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

    random_shuffle(v.begin(), v.end());
    cout << "\n 첫번째 random shuffle: " ;
    print(v);


    random_shuffle(v.begin(), v.end(),
                        [&](int i) {
                            return rand() % i;
                        });
    cout << "\n 두번째 random shuffle: " ;
    print(v);


    shuffle(std::begin(v), std::end(v), std::default_random_engine());
    cout << "\n 세번째 random shuffle: " ;
    print(v);


    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    shuffle (v.begin(), v.end(), std::default_random_engine(seed));
    cout << "\n 네번째 random shuffle: " ;
    print(v);
    return 0;
}
