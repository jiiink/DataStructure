#include <iostream>
#include <list>
#include <string>
using namespace std ;

#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<" "
/*
검사해 볼 다른 string
string mys = "atttgccgaatcggggattctgatttttaag";
string mys = "atgcaatgcaatgcaatgcaatgca";
string mys = "ttttttttaaaaaaaacccccccc";  --> 처리 결과도 동일함.
*/

// 여러분이 채워야 할 부분
list<char> make_dna( list<char> L){
    L.push_back('$');
    return( L ) ;
}


int main() {
    string mys = "atttgcctgatttttacgaatcggggattag";
    list<char> DNA( mys.begin(), mys.end());
    list<char> Out ;

    allout(" DNA= ", DNA ) ;

    Out = make_dna( DNA ) ;
    allout(" Out= ", Out ) ;
    return 0;
}

