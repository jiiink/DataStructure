#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"


int main () {

  map <char,int> mymap;
  map <char,int>::iterator it;

  mymap['a']=  50;
  mymap['b']= 100;
  mymap['c']= 150;
  mymap['d']= 200;

  cout << "b 를 map에서 제거합니다. \n" ;

   it =  mymap.find('b') ;
  if ( it != mymap.end()) // 있느냐 ?
         mymap.erase (it);

  // print content:
  cout << "elements in mymap:" << '\n';
  cout << "a => " << mymap.find('a')->second << '\n';
  cout << "c => " << mymap.find('c')->second << '\n';
  cout << "d => " << mymap.find('d')->second << '\n';
  cout << "b => " << mymap.find('b')->second << '\n';  // 없는 경우에는 0

  return 0;
}
