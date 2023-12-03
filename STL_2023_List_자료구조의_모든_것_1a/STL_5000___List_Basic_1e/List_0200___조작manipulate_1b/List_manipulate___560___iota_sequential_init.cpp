#include <bits/stdc++.h>
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

#define vout(msg,x)  cout<<"\n"<<msg<<"\n";for(auto w : x) cout<<" "<<w ;
using namespace std;

int myrandom (int i) { return std::rand()%i;}

int main() {

    list  <int> la(10); // = {50, 51...}
    vector<int> va(12) ;

    // See for iota : https://en.cppreference.com/w/cpp/algorithm/iota
    iota( begin( la), end( la), 50 );  // 하나씩 올리기
    vout("\n list la[]: ", la) ;


    iota(  begin(va), end(va),  - *la.begin() );
    vout("\n 1. vector va[]: ", va) ;

    random_shuffle( va.begin(), va.end(), myrandom ) ;
    vout("\n 2. shuffled va[]: ", va) ;

    random_shuffle( va.begin(), va.end(), myrandom ) ;
    vout("\n 3. shuffled[] va: ", va) ;
}

/*
template<class ForwardIt, class T>
constexpr // since C++20
void iota(ForwardIt first, ForwardIt last, T value)
{
    while(first != last) {
        *first++ = value;
        ++value;
    }
}
*/

