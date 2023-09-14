
#include <vector>
#include <iostream>
using namespace std;

int main () {

    vector<int> va {10, 20, 30, 40, 50 } ;
    vector<int> vb {50, 51, 52, 53, 54 } ;

    cout << "\n 1. va: " ;
    for(auto &w : va ) {  cout << ++w << " , " ; }  // Reference로 사용. 실제로는 같은 원소를 가르침
    cout << "\n 2. va: " ;
    for(auto  r : va ) {  cout <<   r << " , " ; }

    cout << "\n 3. vb: " ;
    for(auto  w : vb ) {  cout << ++w << " , " ; }  // Value로 사용. 원래 원소와 자체가 다름
    cout << "\n 4. vb: " ;
    for(auto  r : vb ) {  cout <<   r << " , " ; }

  return 0;
}
