// Illustration of range-for loop  using CPP code
#include <iostream>
#include <vector>
#include <map>
using namespace std ;

int main() {


    int X [ 100000] ;
    int N = 100000 ;

    for(int i=0 ; i < N ; i++ ) {
            if(i % 1000 == 0 ) cout << "\n i=" << i ;
        for(int j = 0 ; j < N ; j++)
              X[j] = i+j ;
    }


}
