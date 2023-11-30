#include <iostream>
#include <set>
#define allout(MSG,X)   cout<<"\n "<<MSG<<"\n >> ";for(auto w:X)cout<<w<<", "
using namespace std ;

int main () {
    multiset<int> Mset;
    multiset<int>::iterator it;

    for (int i=1; i<=8; i++) Mset.insert(i*10);   // 10 20 30 40 50 60 70 80

    it=Mset.find(20);
    cout << "\n *it(20) = " << *it ;
    Mset.erase (it);
    Mset.erase (Mset.find(40));

    // 없는 것 찾아보기
    it = Mset.find(99) ;
    cout << "\n *it(99) = " << *it ;
    if( it == Mset.end() ) cout << "오 예 , 없는 경우이군요 " ;

    Mset.insert(30) ;
    Mset.insert(30) ;

    allout("Mset의 내용물: ", Mset ) ;

    cout << "\n Mset.count(30)= " << Mset.count(30) ;
    cout << "\n Mset.count(99)= " << Mset.count(99) ;
    return 0;
}
