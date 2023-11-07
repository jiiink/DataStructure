// unordered_map::begin/end example
#include <iostream>
#include <unordered_map>
using namespace std ;


int main () {
  unordered_map <string,int> mymap = {
                { "Mars", 3000},
                { "Saturn", 60000},
                { "Jupiter", 70000 } };

  mymap.at("Mars") = 3396;
  mymap.at("Saturn") += 272;
  mymap.at("Jupiter") = mymap.at("Saturn") + 9638;

  for (auto& x: mymap) {
    cout << x.first << ": " << x.second << endl;
  }

  return 0;
}
