#include <iostream>     // cout
#include <algorithm>    // set_intersection, sort
#include <vector>       // vector
#include <set>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" :";for(auto w:X)cout<<w<<","
using namespace std ;

int main () {
  vector<int> v1 {5,10,15,20,25};
  vector<int> v2 {50,40,30,20,10};
  vector<int> v3 (10);                      // 0  0  0  0  0  0  0  0  0  0
  vector<int>::iterator it;

  sort (v1.begin(), v1.end() );     //  set intersection을 하려면 반드시 정렬이 되어 있어야 한다. 반듯희 ....
  sort (v2.begin(), v2.end() );     // 왜 sort를 해야 하나고 ? 그건 set_intersect가 head merge를 쓰기 때문이여....

  it=set_union ( v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

  allout("합집합 vector v3[]= ", v3) ;

  v3.resize(it-v3.begin());
  allout(" resize( ) 후 vector v3[]= ", v3) ;

  return 0;
}
