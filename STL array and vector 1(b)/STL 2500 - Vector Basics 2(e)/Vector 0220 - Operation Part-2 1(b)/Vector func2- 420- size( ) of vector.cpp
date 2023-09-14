#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <cstdio>
using namespace std;
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "


int main() {

    vector<int> v(10) ;
    v[0]=-1; v[5]=5; v[6]=6;
    cout << "\n v의 처음 크기: " << v.size();


    allout("v[]의 저장 상태" , v) ;

    v.resize(5); // 크기를 줄여봅시다.
    allout(" resize(5) 이후의 v[] : ", v) ;

    v.shrink_to_fit();
    allout(" v.shrink_to_fit() 이후의 v[] : ", v) ;


    return 0;
}
