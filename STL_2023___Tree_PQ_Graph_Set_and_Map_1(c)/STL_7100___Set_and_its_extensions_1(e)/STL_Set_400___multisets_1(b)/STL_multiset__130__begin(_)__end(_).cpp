#include <iostream>
#include <set>
using namespace std ;


int main () {

  int myints[] = {99, 88, 23, 23, 88, 7, 42,71,71,71,12};
  multiset<int> mset (myints,myints+5);

  multiset<int>::iterator it;

  cout << "\n mset 내용물 :\n";
  for (multiset<int>::iterator it=mset.begin(); it!=mset.end(); ++it)
    cout << ' ' << *it;

  cout << "\n\n mset 내용물(range loop) :\n";
  for(auto w : mset ) cout << w << "-" ;
  cout << '\n';

  return 0;
}
