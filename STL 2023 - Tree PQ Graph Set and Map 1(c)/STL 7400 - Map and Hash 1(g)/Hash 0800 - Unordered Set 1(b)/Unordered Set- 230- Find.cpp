#include <bits/stdc++.h>
using namespace std ;


int main () {

  unordered_set<string> myset = { "red","green","blue", "orange","pink","yellow" };

  string input;
  cout << "color? ";
  getline (cin,input);

  unordered_set<string>::const_iterator got = myset.find (input);

  if ( got == myset.end() )
    cout << "not found in myset";
  else
    cout << "예, 찾았습니다. " << *got << " is in myset";

  cout << endl;

  return 0;
}
