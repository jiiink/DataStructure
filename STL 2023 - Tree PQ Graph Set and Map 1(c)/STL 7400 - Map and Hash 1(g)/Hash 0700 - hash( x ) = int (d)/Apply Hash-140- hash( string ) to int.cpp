// hash example
#include <iostream>
#include <functional>
#include <string>
#include <vector>
using namespace std ;


int main () {


  vector < string > sdata = { "PNU", "good", "Cool Guy", "Computer Games!!!" } ;
  vector < string >::iterator sit ;

  hash < string > str_hash;

  for( sit= sdata.begin(); sit < sdata.end(); sit++ ) {
      cout << "\n hash( " << *sit << " )= " << str_hash( *sit ) ;
  } ;

  return 0;

} // end of main()

