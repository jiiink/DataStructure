#include <bits/stdc++.h>
using namespace std;


int main () {

    list<int> mylist   = { 101, 102, 103, 104, 105 };
    list<int>::iterator itb, ite, itt ;


    itb = mylist.begin() ;
    ite = mylist.end() ;

    cout <<"\n 1. *itb = " << *itb ;
    cout <<"\n 2. *ite = " << *ite ;

    mylist.push_front(99) ;
    cout <<"\n 3. *mylist.begin() = " << *mylist.begin()  ;
    cout <<"\n 4. *itb = " << *itb ;
    cout <<"\n 5. *ite = " << *ite ;
    cout <<"\n 6. *(++itb) = " << *(++itb) ;
    cout <<"\n 7. *(--ite) = " << *(--ite) ;
  return 0;
}
