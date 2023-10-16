#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void print (int elem) {
    cout << "\n ¶Ë±ú > " << elem << ' ';
}


int main() {

    list<int> myl = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    cout << "\n for_each()¸¦ ÇÒ¿ëÇØ º¾´Ï´Ù." ;
    for_each ( myl.begin(), myl.end(), print);  // functor¸¦ ºÎ¸¥´Ù.

    cout << "\n\n °Å²Ù·Î Âï¾î º¾´Ï´Ù " ;
    // print all elements in reverse order
    for_each ( myl.rbegin(), myl.rend(), print);

}
