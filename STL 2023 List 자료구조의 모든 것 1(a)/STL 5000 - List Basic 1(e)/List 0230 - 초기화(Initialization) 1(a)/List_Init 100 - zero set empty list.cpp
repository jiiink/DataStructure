#include <bits/stdc++.h>
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

#define vout(msg,x)  cout<<"\n"<<msg<<"\n";for(auto w : x) cout<<" "<<w ;
using namespace std;

int myrandom (int i) { return std::rand()%i;}

int main() {

    list  <int> la( 15 );  // 미리 15개 빈 원소로 채워진 list를 만듬.
    vector<int> va( 12) ;

    vout("\n Before list la[]: ", la) ;
    iota( begin( la), end( la), 13 );
    vout("\n After list la[]: ", la) ;


    iota(  begin(va), end(va), *la.begin()*10 );
    vout("\n vector[]: ", va) ;

    random_shuffle( va.begin(), va.end(), myrandom ) ;
    vout("\n shuffled[]: ", va) ;

    random_shuffle( va.begin(), va.end(), myrandom ) ;
    vout("\n shuffled[]: ", va) ;
}


