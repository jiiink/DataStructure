#include <iostream>
#include <map>
using namespace std ;

int check_key( std::multimap<char,int> X, char Key){
    if( X.count(Key) == 0 ) cout << "\n Key= " << Key << "는 없습니다." ;
    else cout << "\n Key= " << Key << "는 존재합니다. 그 갯수는 = " << X.count(Key) ; ;
}

int main() {

    std::multimap<char,int> obj;
    obj.insert ( std::pair<char,int>('a',100) );
    obj.insert ( std::pair<char,int>('a',100) );
    obj.insert ( std::pair<char,int>('b',100) );
    obj.insert ( std::pair<char,int>('b',200) );
    obj.insert ( std::pair<char,int>('b',300) );
    obj.insert ( std::pair<char,int>('g',100) );
    obj.insert ( std::pair<char,int>('h',200) );
    obj.insert ( std::pair<char,int>('r',300) );

    for(auto w : {'a', 'b', 'c', 'd', 'e', 'f', 'g'}){
        check_key( obj, w) ;
    }


}
