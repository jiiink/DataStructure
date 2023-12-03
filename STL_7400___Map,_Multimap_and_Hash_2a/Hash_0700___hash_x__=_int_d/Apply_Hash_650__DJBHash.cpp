#include <iostream>
#include <functional>
#include <string>
using namespace std ;

// An algorithm produced by Professor Daniel J. Bernstein and
// shown first to the world on the usenet newsgroup comp.lang.c.
// It is one of the most efficient hash functions ever published.

unsigned int DJBHash(const char* str, unsigned int length) {
   unsigned int hash = 5381;
   unsigned int i    = 0;

   for (i = 0; i < length; ++str, ++i)  {
      hash = ((hash << 5) + hash) + (*str);
   }

   return hash;
} // end of DJBHash( )

// An algorithm proposed by Donald E. Knuth in
// The Art Of Computer Programming Volume 3,
unsigned int DEKHash(const char* str, unsigned int length) {
   unsigned int hash = length;
   unsigned int i    = 0;

   for (i = 0; i < length; ++str, ++i)    {
      hash = ((hash << 5) ^ (hash >> 27)) ^ (*str);
   }

   return hash;
}

/* An algorithm produced by me Arash Partow. I took ideas from all of
the above hash functions making a hybrid rotative and additive
hash function algorithm. There isn't any real mathematical analysis
explaining why one should use this hash function instead of
the others described above other than the fact that
I tired to resemble the design as close as possible to a simple LFSR.
An empirical result which demonstrated the distributive abilities
of the hash algorithm was obtained using a hash-table with 100003 buckets,
hashing The Project Gutenberg Etext of Webster's Unabridged Dictionary,
the longest encountered chain length was 7, the average chain length
was 2, the number of empty buckets was 4579. */

unsigned int APHash(const char* str, unsigned int length) {
   unsigned int hash = 0xAAAAAAAA;
   unsigned int i    = 0;

   for (i = 0; i < length; ++str, ++i) {
      hash ^= ((i & 1) == 0) ? (  (hash <<  7) ^ (*str) * (hash >> 3)) :
                               (~((hash << 11) + ((*str) ^ (hash >> 5))));
   }
   return hash;
}  // end of APHash( )

int main () {

    char *s[] = {"summer", "banana", "doggie", "internet", "soju"}  ;

    cout << "\n  An algorithm produced by Professor Daniel J. Bernstein  " ;
    for(int i = 0 ; i<= 4 ; i++) {
        unsigned int x = DJBHash( s[i], 8) ;
        cout << "\n DJBHash val = " << x  ;
    }

    cout << "\n\n  An algorithm proposed by Donald E. Knuth. " ;
    for(int i = 0 ; i<= 4 ; i++) {
        unsigned int x = DEKHash( s[i], 8) ;
        cout << "\n DEKHash val = " << x  ;
    }

    cout << "\n\n An algorithm produced by me Arash Partow.   " ;
    for(int i = 0 ; i<= 4 ; i++) {
        unsigned int x = APHash( s[i], 8) ;
        cout << "\n APHash val = " << x  ;
    }


  return 0;
}
