#include <bits/stdc++.h>
using namespace std;

/*
 array와는 다르게 list iterator는 항상 지정된 원소를 가르키고 있다.
*/

int main () {

    list<int> mylist   = { 1,2,3,4,5,6,7,8,9,10,11};
    list<int>::iterator it1, it2, it3 ;


    it1 = mylist.begin() ;
    it2 = mylist.end() ;
    it2-- ;
    cout <<"\n 1. *it1 = " << *it1 ;
    cout <<"\n 2. *it2 = " << *it2 ;
    mylist.insert( mylist.begin(), 99) ;
    cout <<"\n\n mylist.insert( mylist.begin(), 99) 이후 \n" ;
    cout <<"\n 3. *it1 = " << *it1 ;
    cout <<"\n 4. *it2 = " << *it2 ;
    cout <<"\n 3. mylist.front() = " << mylist.front() ;

  return 0;
}
