#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {


    vector <int> myv {2, 3, 5, 7, 11};

    int sum = accumulate( myv.begin(), myv.end(), 0);

    cout << " sum = " << sum << endl;
    allout( "myv[]= ", myv ) ;

    return 0;
}
