// count_if example
#include <iostream>     // std::cout
#include <algorithm>    // std::count_if
#include <vector>       // std::vector

bool IsOdd (int i) { return ((i%2)==1); } // È¦¼ö³Ä ?

int main () {
  std::vector<int> myvector {1,2,3,4,5,6,7,8,9,10,51, 52, 53};

  int mycount = count_if (myvector.begin(), myvector.end(), IsOdd);

  std::cout << "myvector¿¡ ÀÖ´Â È¦¼öÀÇ °¹¼ö´Â : " << mycount ;

  return 0;
}

/*
for(i=1..  ){
oodcount = 0
    if (x[i]%2 == 1 ) oddcount++ ;

*/
