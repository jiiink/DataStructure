// hash example
#include <iostream>
#include <functional>
#include <string>
#include <math.h>
#define  SIZE 10000000
using namespace std ;

int myhash (string word) {
   int seed = 131;
   unsigned long hash = 0;
   for(int i = 0; i < word.length(); i++) {
      hash = (hash * seed) + word[i];
   }
   return hash % SIZE;
}


int main () {

    int hv ;
    string s ;
    s = "summer" ; hv = myhash(s) ; cout << "\n hv = " << hv ;
    s = " ummer" ; hv = myhash(s) ; cout << "\n hv = " << hv ;
    s = "Summer" ; hv = myhash(s) ; cout << "\n hv = " << hv ;
    s = "SSummer" ; hv = myhash(s) ; cout << "\n hv = " << hv ;

  return 0;
}
