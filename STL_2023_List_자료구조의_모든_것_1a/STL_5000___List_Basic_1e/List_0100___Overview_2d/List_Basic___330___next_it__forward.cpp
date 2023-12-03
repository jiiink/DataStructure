#include <bits/stdc++.h>
using namespace std;


typedef list<int>::iterator Lit ;

Lit nextIter( Lit it, list<int> &L) {
    it++;
    if(it == L.end() ) { it = L.begin();  }
    return it;
}

int main(){
     list<int> X = { 11,22,33,44,55} ;

     auto it = X.begin()  ;
     for(int i = 1; i <= 23 ; i++ ){
            printf("\n i= %2d, *it= %d", i, *it) ;
            it++ ;
            it = nextIter( it, X ) ;
     }

} // end of main( )
