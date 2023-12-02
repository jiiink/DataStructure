#include <bits/stdc++.h>


using namespace std;

int main () {

  string ca, cb ;
  vector<int> myints;
  vector<string> mystrs = {"K", "O", "R", "E", "A", "N" } ;
  ca = "x" ; cb="World" ;

  cout << "1. INT size: " << myints.size() << '\n';
  for (int i=0; i<10; i++) myints.push_back(i);
  cout << "2. INT size: " << myints.size() << '\n';
  myints.insert (myints.end(),10,100);
  cout << "3. INT size: " << myints.size() << '\n';
  myints.pop_back();
  cout << "4. INT size: " << myints.size() << '\n';

  cout << "\n\n10. STR size: " << mystrs.size() << '\n';
  for (int i=0; i<10; i++) mystrs.push_back( ca );
  cout << "11. STR size: " << mystrs.size() << '\n';
  mystrs.insert (mystrs.end(),50, cb);
  cout << "12. STR size: " << mystrs.size() << '\n';
  mystrs.pop_back();
  cout << "13. STR size: " << mystrs.size() << '\n';

  return 0;
}
