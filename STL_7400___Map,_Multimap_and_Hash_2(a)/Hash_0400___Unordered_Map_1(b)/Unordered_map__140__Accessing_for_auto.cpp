#include <iostream>
#include <string>
#include <unordered_map>
using namespace std ;

int main () {

  unordered_map <string, string> mymap;

  mymap.reserve(22);

  mymap["house"] = "maison";
  mymap["apple"] = "pomme";
  mymap["tree" ] = "arbre";
  mymap["book" ] = "livre";
  mymap["door" ] = "porte";
  mymap["grapefruit"] = "pamplemousse";

  for (auto& x: mymap) {
    cout << x.first << ": " << x.second << endl;
  }

  return 0;
}
