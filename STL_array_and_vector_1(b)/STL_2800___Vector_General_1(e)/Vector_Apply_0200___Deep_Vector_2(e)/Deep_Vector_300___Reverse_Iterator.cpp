#include <iterator>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> coll = { 13, 14, 5, 16, 17, 5, 18, 19 };


    vector<int>::const_iterator pos;
    pos = find (coll.cbegin(), coll.cend(), 5);

    cout << "*pos:  " << *pos << endl;
    cout << "pos =:  " << pos - coll.begin()  << endl;
    vector<int>::const_reverse_iterator rpos(pos);

    for(auto it = coll.rbegin() ; it != coll.rend(); it++){
        cout << "\n" << *it ;
    }

} // end of main( )
