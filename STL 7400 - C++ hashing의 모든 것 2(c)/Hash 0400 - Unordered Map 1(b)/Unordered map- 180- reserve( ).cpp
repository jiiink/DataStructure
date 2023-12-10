#include <iostream>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std ;

int main () {

  unordered_map <string, string> mymap;
  //map <string, string> mymap;

  mymap.reserve(4);

  mymap["house"] = "maison";
  mymap["apple"] = "pomme";
  mymap["tree" ] = "arbre";
  mymap["book" ] = "livre";
  mymap["door" ] = "porte";
  mymap["grapefruit"] = "pamplemousse";

  for (auto& x: mymap) {
    cout << x.first << ":value:  " << x.second << endl;
  }

  return 0;
}
