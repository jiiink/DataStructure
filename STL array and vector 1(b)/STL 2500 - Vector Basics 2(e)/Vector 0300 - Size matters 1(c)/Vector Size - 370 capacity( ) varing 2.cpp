/*

v.capapcity( ) ; 현재 vector에 넣을 수 있는 원소의 개수.
v.size( ) ; 현재 원소의 개수

앞의 예와 달리 초기에 10개의 원소를 미리 넣어둔다.

*/

#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
#include <bits/stdc++.h>
using namespace std;


int main() {

    vector<int> iv {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } ;

    cout << "\n 하나씩 추가할 때 확보되는는 capacity의 크기() " ;
    for (unsigned int loop = 0; loop != 80; ++loop) {
        iv.push_back( loop*loop );
        cout << "\n (size, capa)= " << setw(3) << iv.size() << ", " << setw(3) << iv.capacity() ;
    }

    //삭제될 때는 확보된 공간은 그대로 둔다.
    cout << "\n\n 하나씩 삭제될 때 줄어드는 capacity의 크기() " ;
    for (unsigned int loop = 0; loop != 85; ++loop) {
        iv.pop_back( );
        cout << "\n (size, capa)= " << setw(3) << iv.size() << ", " << setw(3) << iv.capacity() ;
    }

    //억지로 줄이려고 한다면 shrink_to_fit( )

    iv.shrink_to_fit();
    cout << "\n iv[]의 크기 재조정 후:\n" ;
    cout << "\n (size, capa)= " << setw(3) << iv.size() << ", " << setw(3) << iv.capacity() ;

    return 0;

} // end of main( )
