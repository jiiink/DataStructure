#include <iostream>
#include <string>
#include <unordered_map>
#define  SKIP      cout<<endl
using namespace std ;

int main() {

    unordered_map<string, string> myumm = {
    { "apple","red" },
    { "apple","green" },
    { "orange","orange" },
    { "apple","껌정색" },
    { "tomato","dark-red" },
    { "strawberry","red" }   };

    cout << "myumm contains:";
    for (auto it = myumm.begin(); it != myumm.end(); ++it)
       cout << " " << it->first << ":" << it->second;

    SKIP ;

    cout << "myumm's buckets contain:\n";
    for (unsigned i = 0; i < myumm.bucket_count(); ++i) {
       cout << "bucket #[ " << i << " ]= ";
       for (auto local_it = myumm.begin(i); local_it != myumm.end(i); ++local_it)
           cout << " " << local_it->first << ":" << local_it->second;
       SKIP ;
    }

    int x = 0;
    cout << "apple의 모든 value를 출력해보자고...\n";
    auto p = myumm.equal_range("apple");
    for (auto it = p.first; it != p.second; ++it) {
        cout << " " << it->first << ":" << it->second;
    }
   return 0;
}
