// unordered_map::max_load_factor
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std ;


int main () {
  unordered_map <string,string> mymap = {
    {"Au","gold"},
    {"Ag","Silver"},
    {"Cu","Copper"},
    {"Pt","Platinum"}
  };

  cout << "current max_load_factor: " << mymap.max_load_factor() << endl;
  cout << "current size: " << mymap.size() << endl;
  cout << "current bucket_count: " << mymap.bucket_count() << endl;
  cout << "current load_factor: " << mymap.load_factor() << endl;

  float z = mymap.max_load_factor();
  mymap.max_load_factor ( z / 2.0 );
  cout << "\n\n ---------  mymap.max_load_factor ( z / 2.0 ) ---------- \n" ;
  cout << "[max_load_factor halved]" << endl;

  cout << "new max_load_factor: " << mymap.max_load_factor() << endl;
  cout << "new size: " << mymap.size() << endl;
  cout << "new bucket_count: " << mymap.bucket_count() << endl;
  cout << "new load_factor: " << mymap.load_factor() << endl;

  return 0;
}
