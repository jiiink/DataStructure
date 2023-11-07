/*
void rehash( size_type n ); Set number of buckets
Sets the number of buckets in the container to n or more.

 If n is greater than the current number of buckets in the container (bucket_count),
 a rehash is forced. The new bucket count can either be equal or greater than n.

 If n is lower than the current number of buckets in the container (bucket_count),
 the function may have no effect on the bucket count and may not force a rehash.

 A rehash is the reconstruction of the hash table: All the elements in the container
 are rearranged according to their hash value into the new set of buckets.
 This may alter the order of iteration of elements within the container.

 Rehashes are automatically performed by the container whenever its load factor
 is going to surpass its max_load_factor in an operation.

 Notice that this function expects the number of buckets as argument.
 A similar function exists, unordered_map::reserve, that expects the number of elements in the container as argument.
*/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std ;

int main () {

  unordered_map<string,string> mymap;

  mymap.rehash(20);

  mymap["house"] = "maison";
  mymap["apple"] = "pomme";
  mymap["tree"] = "arbre";
  mymap["book"] = "livre";
  mymap["door"] = "porte";
  mymap["grapefruit"] = "pamplemousse";

  cout << "current bucket_count: " << mymap.bucket_count() << endl;

  return 0;
}
