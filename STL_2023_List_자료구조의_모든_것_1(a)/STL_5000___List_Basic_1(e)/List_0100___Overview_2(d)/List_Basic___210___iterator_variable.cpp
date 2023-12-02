#include <bits/stdc++.h>
using namespace std;


int main () {

    list<int> mylist   = { 7, 8, 9, 10, 11};
    list<int>::iterator it1, it2, it3 ;


    it1 = mylist.begin() ;

    it2= it1 ;

    cout <<"\n 1. *it1 = " << *it1 ;
    cout <<"\n 2. *it2 = " << *it2 ;

    mylist.push_front(99) ;
    cout <<"\n 3. *mylist.begin() = " << *mylist.begin()  ;
    cout <<"\n 4. *it2 = " << *it2 ;

    cout <<"\n 5. *++it2 = " << *++it2 ;
    cout <<"\n 6. *++it2 = " << *++it2 ;

  return 0;
}
