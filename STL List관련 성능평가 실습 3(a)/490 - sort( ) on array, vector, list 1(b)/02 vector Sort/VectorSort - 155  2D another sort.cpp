#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main() {

    int i,j,t ;

    vector <int> v0 = { 11, 21, 79 } ;
    vector <int> v1 = { 11, 21, 32 } ;
    vector <int> v2 = { 11, 21, 32, 20 } ;
    vector <int> v3 = { 15, 22, 33, 66 } ;
    vector <int> v4 = { 6,  22, 53, 76, 34, 0, 100 } ;


    vector < vector<int> > deep ;
    deep.push_back( v0 ) ;
    deep.push_back( v1 ) ;
    deep.push_back( v2 ) ;
    deep.push_back( v3 ) ;
    deep.push_back( v4 ) ;

    cout << "\n sorting 이전의 끝 원소 " ;
    for(auto w : deep) {
        cout << "\n " << *(w.end()-1) ;
    }

    cout << "\n\n sorting 이후의 끝 원소 " ;
    sort( deep.begin(), deep.end() ) ;

    for(auto w : deep) {
        cout << "\n " << *(w.end()-1) ;
    }

} // end of main ( )
