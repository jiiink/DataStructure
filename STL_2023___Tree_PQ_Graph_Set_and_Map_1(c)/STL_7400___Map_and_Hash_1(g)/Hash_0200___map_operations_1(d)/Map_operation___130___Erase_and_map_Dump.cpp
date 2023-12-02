#include <bits/stdc++.h>
using namespace std ;

#include "mymaptool.h"


int main () {
  map <string,int> mymap;

  mymap.emplace("라면",     1500);
  mymap.emplace("짜장면",   5500);
  mymap.emplace("돼지국밥", 4000);
  mymap.emplace("토스트" ,  1200);
  mymap["밀면"] = 6500 ;

  while (!mymap.empty())   {
    cout << "begin()==> " << mymap.begin()->first << "\n"   ;
    mapdump("mymap[]: ", mymap ) ;
    mymap.erase(mymap.begin());
  }

  mapdump("Last mymap[]: ", mymap ) ;
  return 0;
}
