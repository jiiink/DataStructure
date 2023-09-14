
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<", "
using namespace std;


int main () {
  vector<int>::size_type sz;

  vector<int> foo;
  sz = foo.capacity();

  cout << "\n vector<int> foo에 하나씩 100개까지 삽입함. \n";
  for (int i=0; i<100; ++i) {
    foo.push_back(i);
    sz = foo.capacity();
    cout << "i= " << i << ": " << "foo capacity changed: " << sz << '\n';

  }

  vector<int> bar;
  sz = bar.capacity();
  bar.reserve( 30);   // this is the only difference with foo above
  cout << "\n 미리 30개를 잡하둔 상황에서 삽입 함. \n";
  for (int i=0; i<100; ++i) {
    bar.push_back(i);

      sz = bar.capacity();
      cout << "i= " << i << ": " << "capacity changed: " << sz << '\n';

  }
  return 0;
}
