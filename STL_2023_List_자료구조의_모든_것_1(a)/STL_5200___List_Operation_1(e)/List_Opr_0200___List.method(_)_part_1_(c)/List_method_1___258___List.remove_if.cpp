using namespace std;
#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;

bool single_digit (const int& value) { return (value<10); }

struct is_odd {
  bool operator() (const int& value) { return (value%2)==1; }
};

int main () {

  list<int> mylist = { 3, 6, 7, 15,36,7,17, 8, 64, 18, 15, 22, 20 };

  mylist.remove_if (single_digit);           // 15 36 17 20 39
  mylist.remove_if ( is_odd()   );               // 36 20

  myout("mylist contains:", mylist) ;


  return 0;
}
