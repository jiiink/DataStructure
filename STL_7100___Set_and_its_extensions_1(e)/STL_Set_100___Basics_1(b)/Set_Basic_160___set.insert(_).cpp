/*
multiset, set은 associative container이며 항상 정렬된 순서를 유지 합니다.
그리고 search, insertion, and removal 동작을 Log 시간에 처리합니다.
평균적으로도 그러하고, 최악의 경우도 그러하고. 실제 구조는 RB-Tree라는 좀 복잡하고
약간 얍삽한 구조를 사용합니다. 한편 ...  operations have logarithmic complexity.

list는 들어간 순서를 그대로 유지하는 컨테이너입니다. 사용자가 지정한
순서를 그대로 보관합니다. 지가 마음대로 순서를 바꾸지 않아요.
한편으로 보면 충직하고, 한편으로 보면 생각이 별 없는 자료구조 입니다.
만일 특정 it로 원소를 지시하고 있다면 상수시간에 해당 원소를 삭제, 추가할 수
있습니다. 왜냐고요 ??? 순서를 유지할 필요가 없으니께요...
그런데 list에서는 찾기작업이 어려워요. random access가 안되니까.

만일 찾기를 빨리하고 싶다면 multiset이나 set를 사용하세요.
아니고 insert delete를 자주 한다면 그냥 list를 사용하시길,
쓸데없는 정렬 동작을 하지 않는다고 가정할 때 말입니다. OK?
*/
#define allout(MSG,X)   cout<<"\n"<<MSG<<": ";for(auto w:X)cout<<w<<", "
#include <iostream>
#include <set>
#include <string>
using namespace std;


int main () {
    set<int> myset;
    set<int>::iterator it;
    pair<set<int>::iterator,bool> ret;

    // set some initial values:
    for (int i=1; i<=5; ++i) myset.insert(i*10);    // set: 10 20 30 40 50
    allout("Set step1: ", myset ) ;

    ret = myset.insert(20);               // no new element inserted
    allout("Set step2: ", myset ) ;

    if (ret.second==false) it=ret.first;  // "it" now points to element 20

    myset.insert (it,35);                 // max efficiency inserting
    myset.insert (it,24);                 // max efficiency inserting
    myset.insert (it,16);                 // no max efficiency inserting
    allout("Set step3: ", myset ) ;

    int myints[]= {5,10,30};              // 10 already in set, not inserted
    myset.insert (myints,myints+3);
    allout("Set step3: ", myset ) ;

    return 0;
}

