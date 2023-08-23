#define vout(msg,x)    cout<<"\n"<<msg;for(auto s:x) cout << "  " << s ;

#include <iostream>     // cout
#include <algorithm>    // for_each
#include <vector>       // vector
using namespace std;

void myfunction (int i) {  // function:
  cout << "\n> " << i;
}

struct myclass {           // function object type:
  void operator() (int i) {cout  << i << "\n >> " ;}
} myobject;

int main () {
  vector<int> myvector { 32, 11, 45, 400, 123, -99};


  cout << "1. myvector contains:";
  for_each (myvector.begin(), myvector.end(), myfunction);
  cout << '\n';

  // or:
  cout << "2. myvector contains:";
  for_each (myvector.begin(), myvector.end(), myobject);
  cout << '\n';

  return 0;
}
