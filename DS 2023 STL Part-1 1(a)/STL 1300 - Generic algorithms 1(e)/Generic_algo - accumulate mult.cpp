#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<":- ";for(auto w:X)cout<<w<<", "
using namespace std;

int mult(int x, int y) { return x * y; }

int main() {

    vector <int> myv {2, 3, 5, 7, 11};

    int product = accumulate( myv.begin(), myv.end(), 1, mult);
    cout << " product = " << product << endl;

    return 0;
}
