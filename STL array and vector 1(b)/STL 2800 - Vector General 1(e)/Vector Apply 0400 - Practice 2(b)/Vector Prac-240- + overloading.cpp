// vector 덧셈을 간편하게 overloading으로 하는 방법을 배워봅시다.

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

template <typename T>
vector<T> operator+(vector<T>& a, vector<T>& b) {
    assert(a.size() == b.size());
    vector<T> result;
    result.reserve(a.size());

    auto ita = a.begin();
    auto itb = b.begin();
    for(; ita < a.end(); ita++, itb++)
        result.push_back( *ita + *itb ) ;

    return result ;
}


int main() {

    vector <int> va   { 1, 2, 4,  5} ;  // 갯수가 다르면 오류가 발생한다.
    vector <int> vb   { 7, 8, 9, 10} ;
    vector <int> vc ;

    vector <string> vda   { "똥", "개", "뿅"} ;
    vector <string> vdb   { "강아지", "너구리", "다름쥐" } ;
    vector <string> vdc ;

    vc  = va + vb ;
    vda = vda + vdb ;

    allout( "vc",  vc ) ;
    allout("vda", vda ) ;
    return 0;
}
