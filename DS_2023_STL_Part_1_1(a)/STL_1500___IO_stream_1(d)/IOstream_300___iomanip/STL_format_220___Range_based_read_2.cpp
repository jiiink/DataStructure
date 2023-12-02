#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <string>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;

struct ifstream : std::ifstream {

  ifstream(const char* fn) : std::ifstream(fn) {}
  typedef std::istream_iterator<std::string> It;

  It begin() { return It(*this); }
  It end()   { return It();      }
};

int main () {

  ifstream file("example.txt");
  for(auto& string : file) {
    std::cout << "-" << string << "\n";
  }

} // end of main( )
