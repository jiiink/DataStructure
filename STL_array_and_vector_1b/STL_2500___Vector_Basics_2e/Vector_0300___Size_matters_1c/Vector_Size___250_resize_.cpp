
#include <bits/stdc++.h>
using namespace std ;
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "

int main () {

    vector<int> myvector;

    for (int i=1; i<10; i++) myvector.push_back(i);

    myvector.resize(5);  // 10개가 5개로 줄어든다. 따라서 첫 5개만 남게 된다.
    cout << "\n 1.  size and capacity: " << myvector.size() << "  " << myvector.capacity() ;
    myvector.resize(50, 2019 );
    cout << "\n 2.  size and capacity: " << myvector.size() << "  " << myvector.capacity() ;
    myvector.resize(12);
    cout << "\n 3.  size and capacity: " << myvector.size() << "  " << myvector.capacity() ;

    allout("myvector[]= ", myvector ) ;

    return 0;
}
