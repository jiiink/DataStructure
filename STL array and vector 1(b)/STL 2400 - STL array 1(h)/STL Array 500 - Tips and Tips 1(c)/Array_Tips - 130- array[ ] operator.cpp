// array::operator[]

#include <bits/stdc++.h>
using namespace std ;

int main () {
  array<int,10> myarray;
  unsigned int i;

  for (i=0; i<10; i++) myarray[i]=i;

  cout << "myarray contains:";
  for (i=0; i<10; i++)
    cout << ' ' << myarray[i];
  cout << '\n';

  return 0;
}
