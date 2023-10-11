#include <bits/stdc++.h>
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

#define vout(msg,x)  cout<<"\n"<<msg<<"\n";for(auto w : x) cout<<" "<<w ;
using namespace std;

int myrandom (int i) { return std::rand()%i;}

int main() {

    list  <int> la(10);  // 미리 10개 원소의 list를 만듬.
    vector<int> va(12) ;

    vout("\n Before list la[]: ", la) ;
    iota( begin( la), end( la), 365 );
    //     시작위치    끝위치  , 시작값
    vout("\n After list la[]: ", la) ;


    iota(  begin(va), end(va), *la.begin()*10 );
    vout("\n vector[]: ", va) ;

    random_shuffle( va.begin(), va.end(), myrandom ) ;
    vout("\n shuffled[]: ", va) ;

    random_shuffle( va.begin(), va.end(), myrandom ) ;
    vout("\n shuffled[]: ", va) ;
}


