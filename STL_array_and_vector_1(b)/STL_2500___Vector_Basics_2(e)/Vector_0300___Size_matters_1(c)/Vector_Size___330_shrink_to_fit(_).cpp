/*

v.capapcity( ) ; 현재 vector에 넣을 수 있는 원소의 개수.
v.size( ) ; 현재 원소의 개수

*/

#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
#include <bits/stdc++.h>
using namespace std;


int main () {

    vector<int> myvector (100, 2020);
    cout << "1. capacity of myvector: " << myvector.capacity() << '\n';

    myvector.resize(10);
    cout << "2. capacity of myvector: " << myvector.capacity() << '\n';
    allout("resize( )이후 myvector[]=", myvector) ;

    myvector.shrink_to_fit();
    cout << "3. capacity of myvector: " << myvector.capacity() << '\n';

    return 0;
}
