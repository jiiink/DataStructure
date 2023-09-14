#include <iostream>
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<":- ";for(auto w:X)cout<<w<<", "

using namespace std;
class U : public binary_function<U, U, bool> {
public:
  int id;
  bool operator()(const U& x, const U& y) const {
     return x.id%100 >= y.id%100;
  }
  friend ostream& operator<<(ostream& o, const U& x) {
    o << x.id;
    return o;
  }
};

int main() {

  vector<U> vector1(30);
  for (int i = 0; i != 30; ++i) vector1[i].id = (((i+111)*(i+345))%1234)*(i+4533)+ 11*i ;

  sort(vector1.begin(), vector1.end(), not2(U()));

  for (int k = 0; k != 30; ++k)
    cout << "\n " << setw(7) << vector1[k].id ;

  return 0;
}
