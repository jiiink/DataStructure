// map::at,, Error를 확인하기 위해서 반드시 사용.

#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"


int main () {
  map <string,int> mymap = {
                { "Coke", 1350 },
                { "Orange", 780 },
                { "Cheese", 7800 },
                { "Water", 0 } };

  mymap.at("Coke")   = 1000;
  mymap.at("Cheese") = 2000;
  mymap.at("Water")  = 300;
  mymap.at("What?")  = 800;  // error 발생함 그러나 다음은 값이 나온다.
  printf("\n mymap[Xoo]= %d", mymap["Xoo"]) ;

  mapdump("mymap[]", mymap ) ;

  return 0;
}
