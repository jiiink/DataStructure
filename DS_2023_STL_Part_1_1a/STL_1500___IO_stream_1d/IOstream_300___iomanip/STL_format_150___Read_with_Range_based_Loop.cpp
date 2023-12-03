#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <string>

using namespace std ;

struct S {
  istream& is;
  typedef istream_iterator<string> It;

  S(istream& is) : is(is) {}
  It begin() { return It(is); }
  It end()   { return It()  ; }
};


int main () {
  ifstream file("yob2004.txt");  // 미국인 이름 파일.
  long idx, cdx ;
  idx = 0 ;
  cdx = 0 ;

  for(auto& string : S(file)) {
    // cout << string << "\n";
    idx++ ;

    if ( idx% 1000 == 0 ) {
            cout <<  " ." ;
            cdx++ ;
            if (cdx %10 == 0 ) cout << " :" << cdx << "\n" ;
    }

  }

  cout << "끝!" ;

} // end of main( )
