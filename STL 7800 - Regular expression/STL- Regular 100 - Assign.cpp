// basic_regex::assign
// note: using regex, a standard alias of basic_regex<char>
#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main () {
  string pattern ("six");
  regex first;
  regex second (pattern);


  first.assign (second);
  second.assign ("[0-9A-F]+", regex::ECMAScript);
  second.assign ({'^','a'}, regex::ECMAScript | regex::icase );

  using namespace regex_constants;                // introducing constants
  second.assign (pattern, ECMAScript | icase );

  string subject = "Sixty six";
  string replacement = "seven";

  cout << "first: " << regex_replace (subject, first, replacement);
  cout << endl;

  cout << "second: " << regex_replace (subject, second, replacement);
  cout << endl;

  return 0;
}
