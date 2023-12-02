#include <bits/stdc++.h>
using namespace std;

int main () {

  vector < string > sdata = { "1", "11", "2", "No", "good", "days", \
                               "will", "be", "No1", "good2", "days2", \
                               "안녕?",  "안녕??"} ;

  hash< string > str_hash ;

  for( auto sit= sdata.begin(); sit < sdata.end(); sit++ ) {
      // 반드시 unsigned integer로 출력을 해야 음수를 방지할 수 있다.
      printf("\n str_hash( %6s ) = %11ud, mod= %5d ",  (*sit).c_str() , str_hash( *sit ), \
             str_hash( *sit )%99877 ) ;
  } ;

  return 0;

} // end of main()

// See prime number list = http://compoasso.free.fr/primelistweb/page/prime/liste_online_en.php

