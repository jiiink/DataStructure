#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <cstdio>
using namespace std;

#define dump(msg,X) cout<<msg;for(auto w:X) cout << w << " "


int main() {
 int i, num ;
 vector  <int>  *myvec ;

 myvec = new vector<int> ;

 myvec->push_back(500) ;
 myvec->push_back(502) ;
 myvec->push_back(505) ;

 dump( "Pointer vector *myvec[]: ", *myvec ) ;

} // END OF MAIN( )

