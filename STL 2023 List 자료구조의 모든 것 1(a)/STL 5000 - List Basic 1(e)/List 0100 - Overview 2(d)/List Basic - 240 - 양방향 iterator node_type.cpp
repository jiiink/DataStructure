#include <bits/stdc++.h>
using namespace std;

#include "mytool.h"

struct Nodex {
    string xname ;
    string xform ;
    list<Nodex>::iterator itup   ;
    list<Nodex>::iterator itdown ;
} nx, ny ;

int main(){
    list<Nodex> mylist ;

    nx.xname = "Bach" ;
    nx.xform = "Composer" ;
    mylist.push_back( nx ) ;

    nx.xname = "Otmar Suitner" ;
    nx.xform = "Director" ;
    mylist.push_back( nx ) ;

    nx.xname = "Chopin" ;
    nx.xform = "Pianist-Composer" ;
    mylist.push_back( nx ) ;

    nx.xname = "Brahms" ;
    nx.xform = "Composer" ;
    mylist.push_back( nx ) ;

    nx.xname = "Drufle" ;
    nx.xname = "Contempo-Composer" ;
    nx.itup = mylist.begin() ;
    mylist.push_back( nx ) ;

    int idist ;
    for(auto it = mylist.begin(); it != mylist.end() ; it++) {
        ny = *it ;
        idist = distance( mylist.begin( ), it ) + 1;
        cout << idist << "==> " << (it)->xname << " : " << (it)->xform  << endl ;
    }




    return 0;
}
