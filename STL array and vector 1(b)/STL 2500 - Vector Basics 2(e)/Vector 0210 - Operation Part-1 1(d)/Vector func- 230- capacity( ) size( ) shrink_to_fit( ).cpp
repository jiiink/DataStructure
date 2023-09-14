#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<", "

int main () {

    vector<int> myvector (55);

    myvector.push_back(100);
    cout << "1. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "1. size of  of myvector: " << myvector.size()    << '\n';

    myvector.push_back(125);
    cout << "2. capacity of myvector: " << myvector.capacity() << '\n';
    cout << "2. size of  of myvector: " << myvector.size()    << '\n';

    myvector.resize(5);
    cout << "3. capacity resize(20: " << myvector.capacity() << '\n';
    cout << "3. size of  resize(20: " << myvector.size()    << '\n';
    myvector[22] = 1000 ;

    myvector.shrink_to_fit();
    cout << "\n shrink_to_fit()을 수행함 \n " ;
    cout << "4. capacity of shrink_to_fit(): " << myvector.capacity() << '\n';
    cout << "4. size of  of shrink_to_fit(): " << myvector.size()   << '\n';
    cout <<  myvector[22]  ;

    return 0;
}
