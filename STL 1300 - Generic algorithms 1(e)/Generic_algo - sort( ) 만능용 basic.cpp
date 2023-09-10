// sort algorithm example
#include <iostream>     // cout
#include <algorithm>    // sort
#include <vector>       // vector
#define showall(HEAD,X)      cout<<"\n"<<HEAD;cout<<"\n";for(auto w : X) cout<< w << " , ";
using namespace std ;

bool myfunction (int i,int j) { return (i>j); }

struct myclass {
  bool operator() (int i,int j) { return (i%10<j%10);}
  // 끝자리 수를 기준으로 오름차순 정렬.
} myobject;

int main () {
  int myints[] = {32,71,12,45,26,80,53,33};
  vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33

  // 기본 디폴트 비교 operator < :
  sort (myvector.begin(), myvector.begin()+4);
  showall( "Before", myvector)    ;

  // using function as comp
  sort (myvector.begin()+4, myvector.end(), myfunction); // 12 32 45 71(26 33 53 80)
  showall( "After 1", myvector)    ;

  // using object as comp
  sort (myvector.begin(), myvector.end(), myobject);     //(12 26 32 33 45 53 71 80)
  showall( "After 2", myvector)    ;


  return 0;
}
