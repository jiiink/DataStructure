// Storing and retrieving tuples from a vector

#include <vector>
#include <tuple>
#include <iostream>
using namespace std ;

typedef tuple<int,int,int> i3tuple;

int main() {
  vector <i3tuple> v;

  for (int i=0; i<10; i++) {
    v.push_back(i3tuple(i,i*2, i*i+1) );
  }

  for(i3tuple t: v) {
    cout << get<0>(t) << ' ';
    cout << get<1>(t) << ' ';
    cout << get<2>(t) << '\n';
  };

} // end of main()



