#include <bits/stdc++.h>
#include <functional>
using namespace std;

template <typename T>
    struct product {
        product(T& storage) : value(storage) {}
        template <typename V>
        void operator()(V& v) {
            value += v;
   }
   T& value;
};


int main() {
   vector <int> cardinal { 1, 5, 6, 10, 12, 15 } ;

   int total_elements = 1;
   for_each(cardinal.begin(), cardinal.end(), product<int>(total_elements));

   cout << "total sum = " << total_elements ;

} // end of main( )
