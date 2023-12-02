#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<" "<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

void insert_sort( vector<int> &X ) {
    int i, key, j;
    for (i = 1; i < X.size() ; i++) {
        key = X[i];
        j = i - 1;
        while (j >= 0 && X[j] > key)         {
            X[j + 1] = X[j];
            j = j - 1;
        }
        X[j + 1] = key;
    }
}

void select_sort( vector<int> &X ) {
    int i, j, key, t , valmin, minit ;
    allout("\n In select( ) input > ", X) ;

    for(int i=0 ; i < X.size(); i++){
        valmin = 99999999;
        for (j = i; j < X.size() ; j++) {
            if( X[j] < valmin ) { valmin= X[j]; minit= j ; }
        }
        t = X[i] ;
        X[i] = valmin ;
        X[minit] = t ;
    }
} // end of select_sort()

int main(){

    vector<int> my =    {6, 12, 3, 9, 8, 7, 1, 5, 4, 10, 11, 2, 4} ;
    vector<int> your =  {6, 12, 3, 9, 8, 7, 1, 5, 4, 10, 11, 2, 4} ;
    allout("\n> Before insert_sort()= ", my ) ;
    insert_sort( my ) ;
    allout("\n> After  insert_sort()= ", my ) ;

    allout("\n> Before select_sort()= ", your ) ;
    select_sort( your ) ;
    allout("\n> After  select_sort()= ", your ) ;
}
