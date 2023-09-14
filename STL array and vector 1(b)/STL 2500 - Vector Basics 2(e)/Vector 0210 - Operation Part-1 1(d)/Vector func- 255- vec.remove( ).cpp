#include <bits/stdc++.h>
#define allout(MSG,X)  cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main () {
   vector<int> myvector;

    for (int i=110; i<=120; i++) myvector.push_back(i);

    allout(" 지우기 이전 vector[]: ", myvector ) ;
    // 첫 3개를 지워봅니다. 지울 때에는 반드시 위치를 지정 :
    myvector.erase (myvector.begin(),myvector.begin()+3);
    allout(" 지우고 난 뒤에 vector[]: ", myvector ) ;
    myvector.push_back(87) ;
    allout(" 추가 한 뒤의 vector[]: ", myvector ) ;

    return 0;
}
