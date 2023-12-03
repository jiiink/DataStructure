#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main()
{
    // input vector of integers
    vector<int> src({ 1, 2, 3, 4, 5 });

    list<int> dest(src.begin(), src.end());

    for (const int &i: dest) {
        cout << i << " ";
    }

    return 0;
}
