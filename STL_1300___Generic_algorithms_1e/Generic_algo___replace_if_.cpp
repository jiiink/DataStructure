#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
#include <bits/stdc++.h>
using namespace std;

bool IsOdd (int i) { return ((i%2)==1); }

int main () {
  vector<int> myvec {13, 45, 22, 34, 5, 100, -21, 9, 3 };

  allout("1. myvec[] :", myvec ) ;
  replace_if (myvec.begin(), myvec.end(), IsOdd, 0);
  allout("2. myvec[] :", myvec ) ;

  return 0;
}
