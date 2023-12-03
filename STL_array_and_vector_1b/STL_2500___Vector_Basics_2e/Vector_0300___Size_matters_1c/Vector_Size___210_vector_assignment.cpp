#include <iostream>
#include <vector>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "

using namespace std ;

int main () {

    vector<int> foo {13, 14, 15, 16};  // array<int, 5> Q1 {1,2,3,4,5} array<int,3> W
    vector<int> bar {35, 36 };
    vector<int> don {-1, -2, -3 };

    bar = foo ;
    foo = don ;

    allout("bar", bar) ;
    allout("foo", foo) ;
    allout("don", don) ;

    foo = vector<int>();

    cout << "\n Size of foo: " << int(foo.size()) ;
    cout << "\n Capacity of foo: " << int(foo.capacity()) ;
    cout << "\n Size of bar: " << int(bar.size()) ;
    cout << "\n Size of don: " << int(don.size()) ;
    return 0;
}
