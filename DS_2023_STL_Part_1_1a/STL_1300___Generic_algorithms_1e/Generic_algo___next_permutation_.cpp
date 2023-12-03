#define vout(msg,x)    cout<<"\n"<<msg;for(auto s:x) cout << "  " << s ;

#include <iostream>     // cout
#include <algorithm>    // for_each
#include <vector>       // vector
using namespace std;


// next_permutation example
#include <iostream>     // cout
#include <algorithm>    // next_permutation, sort

int main () {

  vector<int> myints {4, 2, 1, 5};

  sort ( myints.begin() , myints.end() );

  cout << "4!개의 모든 permutations를 출력해보자. \n";
  do {
    cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << ' ' << myints[3] << '\n';
  } while ( next_permutation(myints.begin() , myints.end()) );

  cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] <<  ' ' << myints[3] <<'\n';

  return 0;
}
