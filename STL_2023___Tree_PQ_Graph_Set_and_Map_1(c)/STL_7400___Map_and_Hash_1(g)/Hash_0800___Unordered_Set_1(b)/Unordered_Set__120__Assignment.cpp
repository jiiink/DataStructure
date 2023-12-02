// 집합 01
#include <iostream>
#include <set>
#include <string>
using namespace std;

void printset( string heading,  set<int> myS ) {
    set<int>::iterator p = myS.begin();
    cout << " >> " << heading << " << \n " ;
    while (p != myS.end()) cout  << *p++ << " ";
}

int main() {
    cout << "집합을 만들어 봅시다." ;

    set<int> s ;

    s = { 1,2,3,4,5,6,7} ;
    printset( "실험1",  s ) ;

    cout << "\nHowever, the size of the set is " << s.size() << ".";



}
