#include <iostream>
using namespace std;

bool is_power2 (int x)  {
  return x && (!(x&(x-1)));
}


int main () {
    int i ;

    for(i=1 ; i<= 1000 ; i++){
        if (is_power2(i))
            printf("\n i=%5d, %d", i, is_power2(i)) ;
    }

}


