#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n  " << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;



int main(){
    string mystr = "PNU_ALL" ;
    list<char> mylist ( mystr.begin(), mystr.end() );

    outlist(" mylist[]= ", mylist ) ;

    auto it1 = mylist.begin() ;
    auto it2 = mylist.end( ) ;

    int gap ;
    gap = distance(it1, it2 ) ;
    cout << "\n gap= " << gap ;


    return 0;
}
