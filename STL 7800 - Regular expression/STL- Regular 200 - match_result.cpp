// basic_regex::assign
// note: using regex, a standard alias of basic_regex<char>
#include <iostream>
#include <string>
#include <regex>
using namespace std;


int main () {

  string s ("subject");
  smatch m;
  regex e ("(sub)(.*)");

  regex_match ( s, m, e );

  cout << "matches:" << endl;
  for (smatch::iterator it = m.begin(); it!=m.end(); ++it) {
	cout << "Matched= " << *it << endl;
  }
  return 0;

}

