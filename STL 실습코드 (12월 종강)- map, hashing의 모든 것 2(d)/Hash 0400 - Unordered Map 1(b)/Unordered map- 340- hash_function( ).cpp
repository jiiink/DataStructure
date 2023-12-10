// unordered_map::hash_function
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std ;

typedef unordered_map<string,string> stringmap;

int main () {

  stringmap mymap;

  stringmap::hasher fn = mymap.hash_function();

  cout << "this:  " << fn ("this")  << endl;
  cout << "thin:  " << fn ("thin")  << endl;
  cout << "this1: " << fn ("this1") << endl;
  cout << "thin1: " << fn ("thin1") << endl;
  return 0;
}
