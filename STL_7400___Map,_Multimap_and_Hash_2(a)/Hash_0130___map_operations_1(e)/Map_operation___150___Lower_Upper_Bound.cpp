#include <bits/stdc++.h>
using namespace std ;
#include "mymaptool.h"

int main () {

  map<char,int> mymap;
  map<char,int>::iterator itlow,itup;

  mymap['a']=  20;
  mymap['c']=  40;
  mymap['f']=  60;
  mymap['g']=  80;
  mymap['k']= 101;
  mymap['l']=  62;
  mymap['n']=  83;
  mymap['p']= 104;

  mapdump("\n 지우기 전 mymap[]= ", mymap ) ;

  itlow = mymap.lower_bound ('f');  // 'f' 바로 밑의 key
  itup  = mymap.upper_bound ('l');   // 'l' 바로 위의 key

  mymap.erase(itlow,itup);        // erases [itlow,itup)

  mapdump("\n 지운 후 mymap[]= ", mymap ) ;

  return 0;
}





