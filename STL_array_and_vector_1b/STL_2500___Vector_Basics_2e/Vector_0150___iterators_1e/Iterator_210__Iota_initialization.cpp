#include <bits/stdc++.h>
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

#define vout(msg,x)  cout<<"\n"<<msg<<"\n";for(auto w : x) cout<<" "<<w ;
using namespace std;

int myrandom (int i) { return std::rand()%i;}

int main() {

    list  <int> la(10);
    vector<int> va(12) ;

    iota( begin( la), end( la), 10 );
    vout("\n list la[]: ", la) ;


    iota(  begin(va), end(va), 5000) ; // *la.begin()*10 );
    vout("\n vector[]: ", va) ;


    random_shuffle( va.begin(), va.end(), myrandom ) ;
    vout("\n shuffled[]: ", va) ;
}


