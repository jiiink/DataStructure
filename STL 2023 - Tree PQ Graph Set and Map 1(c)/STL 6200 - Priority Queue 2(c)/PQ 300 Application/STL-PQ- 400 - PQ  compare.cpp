#include <bits/stdc++.h>
using namespace std;

class mycomparison {
   bool reverse;
public:
  mycomparison(const bool& revparam=false) {reverse=revparam;}
  bool operator() (const int& lhs, const int&rhs) const   {
    if (reverse) return (lhs>rhs);
    else return (lhs<rhs);
  }
};

int main () {
  int myints[]= { 17, 160, 510, -20, 52, 19, -102, 7, 45, 801, 100, 11};

  priority_queue<int> first  (myints+3, myints+5) ;
  priority_queue<int> second (myints  , myints+8);
  priority_queue<int, vector<int>, greater<int> > third (myints,myints+8);
  typedef priority_queue<int, vector<int>, mycomparison> mypq_type;

  mypq_type fourth;                       // less-than comparison
  mypq_type fifth (mycomparison(true));   // greater-than comparison

  // 학생이 해야할 일,
  // 4개의 priority Queue의 내용을 모두 출력해 봅시다.
  // first
  // second
  // third
  // fourth
  // fifth

  return 0;
}
