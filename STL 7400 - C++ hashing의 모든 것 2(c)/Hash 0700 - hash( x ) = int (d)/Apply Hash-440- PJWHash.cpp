#include <iostream>
#include <functional>
#include <string>
using namespace std ;

unsigned int PJWHash(const char* str, unsigned int length) {
   const unsigned int BitsInUnsignedInt = (unsigned int)(sizeof(unsigned int) * 8);
   const unsigned int ThreeQuarters     = (unsigned int)((BitsInUnsignedInt  * 3) / 4);
   const unsigned int OneEighth         = (unsigned int)(BitsInUnsignedInt / 8);
   const unsigned int HighBits          =
                      (unsigned int)(0xFFFFFFFF) << (BitsInUnsignedInt - OneEighth);
   unsigned int hash = 0;
   unsigned int test = 0;
   unsigned int i    = 0;

   for (i = 0; i < length; ++str, ++i)    {
      hash = (hash << OneEighth) + (*str);

      if ((test = hash & HighBits) != 0)       {
         hash = (( hash ^ (test >> ThreeQuarters)) & (~HighBits));
      }
   }
   return hash;
}

unsigned int ELFHash(const char* str, unsigned int length) {
   unsigned int hash = 0;
   unsigned int x    = 0;
   unsigned int i    = 0;

   for (i = 0; i < length; ++str, ++i)    {
      hash = (hash << 4) + (*str);
      if ((x = hash & 0xF0000000L) != 0) {
         hash ^= (x >> 24);
      }
      hash &= ~x;
   }
   return hash;
} // end of ELFHash( )

unsigned int BKDRHash(const char* str, unsigned int length) {
   unsigned int seed = 131; /* 31 131 1313 13131 131313 etc.. */
   unsigned int hash = 0;
   unsigned int i    = 0;

   for (i = 0; i < length; ++str, ++i)    {
      hash = (hash * seed) + (*str);
   }

   return hash;
} // end of BFDRHash( )

int main () {

    char *s[] = {"summer", "banana", "doggie", "internet", "soju"}  ;

    cout << "\n  Peter J. Weinberger of AT&T Bell Labs  " ;
    for(int i = 0 ; i<= 4 ; i++) {
        unsigned int x = PJWHash( s[i], 8) ;
        cout << "\n PJWHash val = " << x  ;
    }

    cout << "\n\n Widley used hash function on UNIX based systems.   " ;
    for(int i = 0 ; i<= 4 ; i++) {
        unsigned int x = ELFHash( s[i], 8) ;
        cout << "\n ELFHash val = " << x  ;
    }

    cout << "\n\n Brian Kernighan and Dennis Ritchie's C Book.    " ;
    for(int i = 0 ; i<= 4 ; i++) {
        unsigned int x = BKDRHash( s[i], 8) ;
        cout << "\n BKDRHash val = " << x  ;
    }


  return 0;
}
