#include <bits/stdc++.h>
using namespace std;


struct S {
    int n;    // S의 원소 data 1
    string s; // S의 원소 data 2
    float d;  // S의 원소 data 3
    bool operator<(const S& rhs) const {  // 순서 비교 기준 rhs: right hand side
           return tie(n, s, d) < tie(rhs.n, rhs.s, rhs.d);
    }
};

int main() {
    set<S> set_of_s; // S is LessThanComparable

    S value {42, "Test", 3.14};   // set의 한 원소 value의 초기화
    set<S>::iterator iter;        // 집합 S의 iterator, Red-Black Tree의 pointer
    bool inserted;

    // unpacks the return value of insert into iter and inserted
    tie(iter, inserted) = set_of_s.insert( {78, "Doggy",   89.045});
    tie(iter, inserted) = set_of_s.insert( {53, "Katz",     0.123});
    cout << "\n" << (*iter).s << " " << (*iter).d ;
    tie(iter, inserted) = set_of_s.insert( {34, "Collins", 12.65});
    tie(iter, inserted) = set_of_s.insert( {27, "Katz",    -7.78});
    tie(iter, inserted) = set_of_s.insert(value);

    if (inserted)
        cout << "\n> Value가 성공적으로 입력되었습니다. \n";

    for(auto w : set_of_s){
        cout << "\n" << w.s << " " << w.d ;
    }
}
