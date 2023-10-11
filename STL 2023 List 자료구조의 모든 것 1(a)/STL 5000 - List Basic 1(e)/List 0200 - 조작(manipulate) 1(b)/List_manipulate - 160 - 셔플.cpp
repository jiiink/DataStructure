#include <bits/stdc++.h>
using namespace std;
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "

int main() {

    vector<int> myVector(12) ;

    iota( myVector.begin(), myVector.end(), 100 ) ;

    // 시드를 이용하여 랜덤 순서 생성
    int seed_value = 2023; // 시드 값 설정 (원하는 값으로 변경 가능)
    seed_seq seedSequence{seed_value};
    default_random_engine engine(seedSequence);

    allout("원래 벡터[]= ", myVector ) ;

    shuffle(myVector.begin(), myVector.end(), engine);

    allout("섞인 벡터[]= ", myVector ) ;

    return 0;
}
