#include <iostream>
#include <iomanip>
#include <unordered_map>   // 속도가 map<>보다 더 빠름. 진짜 map
// #include "../../../../../../../mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/bits/hashtable.h"
using namespace std ;

unordered_map<int, int> m(20);

void insert(int a) {
   auto idx = m.bucket(a);
   if (m.bucket_size(idx) > 0) {
      const auto& key = m.begin(idx)->first;
      auto nh = m.extract(key);
      nh.key() = a;
      nh.mapped() = a;
      m.insert(move(nh));
   }
   else
      m.insert({a, a});
}

int main() {


    cout << " What Happen? " ;

    for (int i = 0; i < 500; i++) {
      auto bc1 = m.bucket_count();
      cout << "\n i= " << i << ",  Bcount[]= " << bc1 ;
      insert(i);
      auto bc2 = m.bucket_count();
      if (bc1 != bc2) cout << " bc2 = " << bc2 << endl;
   }
}
