#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

typedef list<int>::iterator Lit ;

int main(){
     list<int> X = { 11,12,13,14,15,16,17} ;

     Lit Xit ;


     for(int i= 0; i<= 20 ; i++ ){
        Xit = X.begin() ;   // 항상 처음으로 고정
        advance(Xit,i) ;
        cout << "\n i=" << i << ", *Xit= " << *Xit ;
     }

     cout << "\n\n 앞으로만 나아가기 \n" ;
     Xit = X.begin() ;
     for(int i= 0; i<= 20 ; i++ ){
        advance(Xit,i) ;
        cout << "\n i=" << i << ", *Xit= " << *Xit ;
     }


     cout << "\n 거꾸로 돌려 봅시다. \n " ;
    for(int i= 0; i<= 20 ; i++ ){
        Xit = X.begin() ;   // 항상 처음으로 고정
        advance(Xit,-i) ;
        cout << "\n Backward i=" << i << ", *Xit= " << *Xit ;
     }
}
