#include <iterator>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {

    list<int> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    list<int>::iterator pos = coll.begin();
    cout << *pos << endl;

    advance (pos, 13);
    cout << *pos << endl;

    advance (pos, -13);
    cout << *pos << endl;
}
