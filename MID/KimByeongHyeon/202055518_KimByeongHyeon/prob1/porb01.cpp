#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

void showvv( vector< vector <int> > X ) {
    for(auto Vw: X) {
        cout << "\n > " ;
        for(auto z: Vw ){
            cout <<  z << ", " ;
        }
    }
}

// 아래 함수를 채우면 됩니다. 일단은 그대로 통과
vector<vector<int>> Xrotate( vector<vector<int>>  Z ) {
    vector<vector<int>> Result ;
    Result = Z ;
    return ( Result ) ;
}


int main() {
    vector< vector<int> > T { {21}, {54,30,2}, {17,9}, {50},\
                           {4,62,99,21}, {16,20}, {9,5,54} }, Q ;

    cout << "\n\n 초기 Xrotate( ) 후" ;
    showvv( T ) ;
    T = Xrotate( T ) ;
    cout << "\n\n 1차 Xrotate( ) 후" ;
    showvv( T ) ;

    T = Xrotate( T ) ;
    cout << "\n\n 2차 Xrotate( ) 후" ;
    showvv( T ) ;


} // end of main()
