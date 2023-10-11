#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

typedef list<int>::iterator Lit ;

Lit nextIter(Lit it, Lit ibeg,  Lit iend) {
    it++;
    if(it == iend) { it = ibeg; }
    return it;
}


Lit prevIter(Lit it, Lit ibeg,  Lit iend) {
    if(it == ibeg) { it = iend; it--;  }
    else {   it--;   }
    return it;
}


int main(){
     list<int> X = { 1,2,3,4,5,6,7,8,9} ;

     auto it = X.begin() ;
     advance(it, 4);
     cout << "\n 1. *it= " << *it ;
     advance(it, 4);
     cout << "\n 2. *it= " << *it ;
     advance(it, -4);
     cout << "\n 3. *it= " << *it ;

     it = prevIter( it, X.begin(), X.end()) ;
     cout << "\n 4. *it= " << *it ;

     it = nextIter( it, X.begin(), X.end()) ;
     cout << "\n 5. *it= " << *it ;

}
