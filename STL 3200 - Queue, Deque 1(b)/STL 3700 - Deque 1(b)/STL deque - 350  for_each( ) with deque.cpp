#include <iterator>
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void myprint (int elem) {
    cout << "\n myprint()  >> " << elem ;
}

int main() {

    deque<int> coll = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    deque<int>::const_iterator pos1 ; // 위치 지정자.

    pos1 = find ( coll.cbegin(), coll.cend(), 2);

    auto pos2 = find ( coll.cbegin(), coll.cend(), 7);

    for_each (pos1, pos2, myprint);         // operation
    cout << endl;

    // iterators Çü½ÄÀ» ¹Ù²Þ
    deque<int>::const_reverse_iterator rpos1(pos1);
    deque<int>::const_reverse_iterator rpos2(pos2);

    // print all elements in range [pos1,pos2) in reverse order
    for_each (rpos2, rpos1, myprint);         // operation
    cout << endl;
}
