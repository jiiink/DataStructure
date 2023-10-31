// 집합의 복사와 관리

#include <iostream>
#include <set>
#include <string>
using namespace std;

void set_print( string heading,  set<int> myS ) {

    cout << "\n\n " << heading << " : " ;
    for(auto w : myS){
        cout << " " << w ;
    }
}

int main() {
    cout << "집합을 만들어 봅시다." ;
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    int a[] = {7, 4, 9, 1, 3, 4, 8, 2, 7, 5, 3, 6, 10, 4};
    set<int> s(a, a+14);

    cout << "\nHowever, the size of the set is " << s.size() << ".";
    set_print( "실험1 Set s",  s ) ;

    set<int> s2(s) ;   // s를 s2에 복사합니다.
    set_print( "실험2 Set s2",  s2 ) ;

    set<int> s3 ;
    set_print( "실험3 빈 집합 Set s3",  s3 ) ;

}
