#include <vector>
#include <iostream>
using namespace std;


typedef vector<int>::iterator vec_iter;

void doSomething(vec_iter first, vec_iter last) {
    cout << "\n In do Something:" ;
    for (vec_iter cur = first; cur != last+1; ++cur) {
       cout << " " << *cur << ", ";
    }
}

int main() {
   vector<int> v { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, -100 };
   // for (int i= 0; i < 10; ++i) { v.push_back(i*10); }

   doSomething(v.begin() + 1, v.begin() + 5);
   doSomething(v.begin() + 2, v.begin() + 4);

   return 0;
}
