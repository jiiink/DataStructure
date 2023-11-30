// basic_regex::mark_count
// note: using regex, a standard alias of basic_regex<char>

#include <iostream>
#include <string>
#include <regex>
#include <iterator>
using namespace std;


int main () {

  regex myregex ("(sub)([a-z]*).*");
  cout << "The pattern captures " << myregex.mark_count() << " sub-expressions.\n";

  cmatch m;
  regex_match ("subject", m, myregex);

  if ( m.size() == myregex.mark_count() + 1 ) {
    cout << "Ok, all sub-expressions captured.\n";
    cout << "Matched expression: " << m[0] << "\n";
    for (unsigned i=1; i<m.size(); ++i)
	  cout << "Sub-expression " << i << ": " << m[i] << "\n";
  }

  return 0;
}
