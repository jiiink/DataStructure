
#include <iostream>     // cout, boolalpha
#include <algorithm>    // lexicographical_compare
#include <cctype>       // tolower
using namespace std ;

bool mycomp (char c1, char c2) {
    return tolower(c1)<tolower(c2);
}

int main () {
  char foo[]="Apple";
  char bar[]="apartment";

  cout << boolalpha;

  cout << "Comparing foo and bar lexicographically (foo<bar):\n";

  cout << "Using default comparison (operator<): ";
  cout << lexicographical_compare(foo,foo+5,bar,bar+9);
  cout << '\n';

  cout << "Using mycomp as comparison object: ";
  cout << lexicographical_compare(foo,foo+5,bar,bar+9,mycomp);
  cout << '\n';

  return 0;
}
