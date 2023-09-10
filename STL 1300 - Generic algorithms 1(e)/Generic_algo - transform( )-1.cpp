// transform algorithm example
#include <iostream>     // cout
#include <algorithm>    // transform
#include <vector>       // vector
#include <functional>   // plus
#define  vout(msg,x)    cout<<"\n"<<msg; for(auto s:x) cout << "  " << s ;
using namespace std ;

int op_increase (int i) { return ++i; }

int main () {
  vector<int> foo {10, 20, 30, 40, 50 };
  vector<int> bar;


  bar.resize(foo.size());                         // allocate space
  vout("1. foo[]=", foo ) ;
  vout("2. bar[]=", bar ) ;
  transform (foo.begin(), foo.end(), bar.begin(), op_increase);
  //          여기부터      여기까지를  여기에 저장, 적용할 동작

  vout("3. foo[]=", foo ) ;
  vout("4. bar[]=", bar ) ;

  transform (foo.begin(), foo.end(), bar.begin(), foo.begin(), plus<int>());
  //          여기서      여기까지를
                                                  // foo: 21 41 61 81 101

  vout("5. foo[]=", foo ) ;
  vout("6. bar[]=", bar ) ;
  return 0;
}
