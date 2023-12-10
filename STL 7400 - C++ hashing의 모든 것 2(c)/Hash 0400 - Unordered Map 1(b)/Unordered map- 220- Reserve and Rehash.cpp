// unordered_map::begin/end example
#include <iostream>
#include <math.h>
#include <unordered_map>
using namespace std ;


int main () {

  unordered_map <string,string> mymap = {
    {"사과","apple"},
    {"오뎅","Odeng"},
    {"똥","Dung"},
    {"쌀","Rice"},
    {"감자","Potato"},
    {"소주","Soju"},
    {"컴퓨터","Computer"}
  };

  mymap.reserve(pow(2,10));

  cout << "\n After Reserve" << endl ;
  for (auto& x: mymap) {
    cout << "mymap[" << x.first << ":" << x.second << "]";
    cout << " is located at # " << mymap.bucket (x.first) << endl;
  }

  mymap.rehash(pow(2,16));
  cout << "\n After Rehash" << endl ;
  for (auto& x: mymap) {
    cout << "mymap[" << x.first << ":" << x.second << "]";
    cout << " is located at # " << mymap.bucket (x.first) << endl;
  }

  return 0;
}
