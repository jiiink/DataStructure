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

void rpset( string heading,  set<int> myS ) {
    cout << " >> " << heading << " << \n " ;
    for(auto w : myS ){
        cout << "\n element= " << w ;
    }
}

int main() {
    cout << "집합을 만들어 봅시다." ;
    cout << "\n Press Enter to continue ... ";
    cin.ignore(80, '\n'); // unbuffered I/O

    int a[] = {7, 4, 9, 9, 3, 4, 8, 2, 7, 5, 3, 6, 2, 4};
    set<int> s(a, a+14);

    cout << "\n set s의 크기는 =  " << s.size() << ".";
    printset( "\n 실험1",  s ) ;

    rpset( "\n 실험2",  s ) ;

}
