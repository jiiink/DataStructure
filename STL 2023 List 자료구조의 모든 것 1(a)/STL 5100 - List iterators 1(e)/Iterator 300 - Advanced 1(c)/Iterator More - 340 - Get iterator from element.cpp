#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


list<int>::iterator pointerToIter (int* myPointer) {
    //iterator로부터 bye 크기의 떨어진 거리를 계산.
    size_t iterOffset = (size_t)&(*((list<void*>::iterator)nullptr));
    list<int>::iterator iter;
    *(intptr_t*)&iter = (intptr_t)myPointer - iterOffset;

    return iter;
}

int main () {
    list<int> intList;
    intList.push_back (10);
    int* i1 = &intList.back ();

    intList.push_back (20);
    intList.push_back (30);
    int* i3 = &intList.back ();

    intList.push_back (40);
    intList.push_back (50);
    int* i5 = &intList.back ();

    Outlist("초기", intList) ;

    intList.erase (pointerToIter (i1)); // 저장해준 iterator 위치의 원소를 지움.
    intList.erase (pointerToIter (i3));
    intList.erase (pointerToIter (i5));

    Outlist("후기", intList) ;

    return 0;
}
