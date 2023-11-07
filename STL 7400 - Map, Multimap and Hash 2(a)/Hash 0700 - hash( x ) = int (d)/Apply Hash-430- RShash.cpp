/* A simple hash function from Robert Sedgwicks Algorithms in C book.
   We added some simple optimizations to the algorithm in order to
   speed up its hashing process.
*/
#include <iostream>
#include <functional>
#include <string>
using namespace std ;

unsigned int RSHash(const char* str, unsigned int length){
   unsigned int b    = 378551;
   unsigned int a    = 63689;
   unsigned int hash = 0;
   unsigned int i    = 0;

   for (i = 0; i < length; ++str, ++i)    {
      hash = hash * a + (*str);
      a    = a * b;
   }
   return hash;
} // end of RSHash( )

unsigned int JSHash(const char* str, unsigned int length) {
   unsigned int hash = 1315423911;
   unsigned int i    = 0;

   for (i = 0; i < length; ++str, ++i)    {
      hash ^= ((hash << 5) + (*str) + (hash >> 2));
   }
   return hash;
}  // end of JSHash()

int main () {

    char *s[] = {"summer", "banana", "doggie", "internet", "soju"}  ;

    cout << "\n Robert Sedgwicks Algorithms  " ;
    for(int i = 0 ; i<= 4 ; i++) {
        unsigned int x = RSHash( s[i], 4) ;
        cout << "\n RSHash val = " << x  ;
    }

    cout << "\n A bitwise hash function written by Justin Sobel  " ;
    for(int i = 0 ; i<= 4 ; i++) {
        unsigned int x = JSHash( s[i], 4) ;
        cout << "\n JHHash val = " << x  ;
    }

  return 0;
}
