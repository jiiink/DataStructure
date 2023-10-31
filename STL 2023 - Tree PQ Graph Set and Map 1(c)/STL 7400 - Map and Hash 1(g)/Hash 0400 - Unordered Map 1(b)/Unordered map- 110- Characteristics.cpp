// unordered_map hash table stats
#include <iostream>
#include <unordered_map>
using namespace std ;

int main ()
{
  unordered_map<int,int> mymap;

  for(int i = 0 ; i < 10000 ; i++){
    mymap[i] = ((i+7837)*(i+1937))% 234 ;
  }

  cout << "size = " << mymap.size() << endl;
  cout << "bucket_count = " << mymap.bucket_count() << endl;
  cout << "load_factor = " << mymap.load_factor() << endl;
  cout << "max_load_factor = " << mymap.max_load_factor() << endl;

  return 0;
}
