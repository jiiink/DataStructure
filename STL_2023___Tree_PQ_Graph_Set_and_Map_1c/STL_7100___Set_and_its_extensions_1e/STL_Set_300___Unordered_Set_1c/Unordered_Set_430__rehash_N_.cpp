/*
Sets the number of buckets in the container to n or more.
If n is greater than the current number of buckets in the container
(bucket_count), a rehash is forced. The new bucket count can either
be equal or greater than n.

If n is lower than the current number of buckets in the container
(bucket_count), the function may have no effect on the bucket count and may
not force a rehash.

A rehash is the reconstruction of the hash table: All the elements
in the container are rearranged according to their hash value into
the new set of buckets. This may alter the order of iteration of elements
within the container.
Rehashes are automatically performed by the container whenever its load
factor is going to surpass its max_load_factor in an operation.
*/

#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std ;

int main () {
    unordered_set<string> myset;

    myset.rehash(15);

    myset.insert("office");
    myset.insert("house");
    myset.insert("gym");
    myset.insert("parking");
    myset.insert("highway");
    myset.insert("부산갈매기");
    myset.insert("자료구조만세");

    cout << "current bucket_count: " << myset.bucket_count() << endl << endl ;
    cout << "myset{}의 각 Bucket[]의 내용 :\n";
    for ( unsigned i = 0; i < myset.bucket_count(); ++i) {
          cout << "bucket [" << i << "] = ";
          for ( auto local_it = myset.begin(i); local_it!= myset.end(i); ++local_it )
              cout  << *local_it << ", ";
          cout << endl;
    }

    return 0;
}
