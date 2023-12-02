#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"


int main () {
  map <string,int> mymap;
  string w ;

  w="떡라면" ;

  mymap[ w ]  = 2300 ;
  mymap["생수"] = 230 ;
  mymap.emplace("라면",     3500);
  mymap.emplace("짜장면",   5500);
  mymap.emplace("돼지국밥", 4000);
  mymap.emplace("토스트" ,  1200);

  mapdump("mymap[]: ", mymap ) ;

  return 0;
}
