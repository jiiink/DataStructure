// hash example
#include <iostream>
#include <functional>
#include <string>
using namespace std ;

unsigned int RSHash(const char* str, unsigned int length){
   unsigned int b    = 378551;
   unsigned int a    = 63689;
   unsigned int myhash = 0;
   unsigned int i    = 0;

   for (i = 0; i < length; ++str, ++i)    {
      myhash = myhash * a + (*str);
      a    = a * b;
   }

   return myhash;
}

int main () {

    char *s[6] = {"summer", "banana", "doggie", "internet", "soju"}  ;
    for(int i = 0 ; i<= 4 ; i++) {
        unsigned int x = RSHash( s[i], 5) ;
        cout << "\n hash val= " << s[i] << ", code =   " << x << endl ;
    }


  return 0;
}
