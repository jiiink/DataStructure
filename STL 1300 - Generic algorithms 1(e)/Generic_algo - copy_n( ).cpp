#include <iostream>     // std::cout
#include <algorithm>    // std::copy
#include <vector>       // std::vector

using namespace std ;

int main () {
  int myints[]={10,20,30,40,50,60,70};
  vector<int> myvector;

  myvector.resize(7);   // allocate space for 7 elements

  copy_n ( myints, 7, myvector.begin() );

  cout << "myvector contains:";
  for (vector<int>::iterator it = myvector.begin(); it!=myvector.end(); ++it)
    cout << ' ' << *it;

  cout << '\n';

  return 0;
}
