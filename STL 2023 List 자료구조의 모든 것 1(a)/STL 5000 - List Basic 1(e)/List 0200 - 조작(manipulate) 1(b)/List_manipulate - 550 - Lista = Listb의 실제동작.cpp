#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

// Python과는 다르다. Python은 pointer만 copy 함.

int main() {

    string my = "PNU-PigSoup!" ;
    list<char> la (my.begin(), my.end()) ;
    list<char> lb ;

    allout("Before la<>= ", la) ;
    allout("Before lb<>= ", lb) ;

    cout << "\nlb = la ; 작업을 합니다. \n" ;
    lb = la ; // 새로 쪼개서 원소 자체를 그대로 copy 한다. 시간이 왕창 걸림.
    allout("After la<>= ", la) ;
    allout("After lb<>= ", lb) ;

    cout << "\n\nla.push_back('W') 이후 상황 \n" ;
    la.push_back('W') ;
    allout("After la<>= ", la) ;
    allout("After lb<>= ", lb) ;

    return 0;
}




