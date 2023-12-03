#include <iostream>
#include <vector>
#include <array>

using namespace std;
array< array<int, 3>, 4> arr = { 1,2,3,4,5,6,7,8,9,10,11,12} ;

int main() {
    cout << arr[2][2] << endl ;
    cout << *arr.begin()->begin()+2 << endl ;
    cout << *(arr.end()-1)->begin()+1 << endl ;

} // end of main( )
