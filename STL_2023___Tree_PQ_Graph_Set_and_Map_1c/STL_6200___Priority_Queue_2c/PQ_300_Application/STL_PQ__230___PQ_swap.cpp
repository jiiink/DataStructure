#include <bits/stdc++.h>
using namespace std;


int main () {

  priority_queue<int> foo,bar;
  foo.push(15);
  foo.push(30);
  foo.push(10);
  bar.push (101);
  bar.push(202);


  foo.swap(bar);

  cout << "size of foo: " << foo.size() << '\n';
  cout << "size of bar: " << bar.size() << '\n';

  return 0;
}


