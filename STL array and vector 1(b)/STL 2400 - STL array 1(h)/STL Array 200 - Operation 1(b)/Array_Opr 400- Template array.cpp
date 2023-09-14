#include <bits/stdc++.h>
using namespace std;

class name {
  public:
    string first;
    string last;
    name(string a, string b){ first = a; last = b; }
    name ()  { first="Cho" ; last="Pig" ; }
    nprint() { cout << "==> " << first << " " << last << endl ;}
};

int main (int argc, const char * argv[]) {

  const int N = 3;
  name T { "Thomas", "Harp" } ;
  array <name, N >  myName ;

  T.nprint() ;
  myName[0].nprint() ;
  myName[1].nprint() ;

  return 0;
}
