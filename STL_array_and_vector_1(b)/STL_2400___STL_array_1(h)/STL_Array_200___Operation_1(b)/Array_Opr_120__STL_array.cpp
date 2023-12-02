// Illustration of range-for loop  using CPP code

#include <iostream>
#include <vector>
#include <array>

using namespace std;

array<int, 5> M = {1,2,3,4,5} ;
// array arr of size 5
array< array<int, 3>, 3> arr = { 1,2,3,14,15,16,27,28,29} ;

int main() {
    // initialize elements
    for (auto & outer_array : arr) {
        for(auto & inner_array : outer_array) {
              cout << "\n inner_array = " << inner_array ;

        }
    }// end of outer_loop
} // end of main( )
