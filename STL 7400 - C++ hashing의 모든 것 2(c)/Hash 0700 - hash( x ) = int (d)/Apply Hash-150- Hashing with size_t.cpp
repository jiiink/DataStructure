#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <functional>
using namespace std ;


int main() {

    vector <string> words ={ "Stand1", "Stand2", " Stand2",
                             "stand1", "stand2", "stand " } ;
    size_t hashval ;
    hash <string> hash_fn;

    for(auto w : words ){
         hashval = hash_fn( w );  //size_t = unsigned int
         cout << "hash(" << setw(8) <<  w << " )= " << hashval << '\n';
    } // end of for : words

}
