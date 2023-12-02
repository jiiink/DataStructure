#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <cstdio>
#include <set>
#include <map>
using namespace std;

/*
C++11에서는 auto 라는 키워드가 추가가 되었습니다.
그런데 auto 키워드의 문제는 begin(), end(), rbegin(), rend() 로는
const_iterator 타입을 받을 수 없다는 것입니다.
begin()으로 받으면 타입 추론에 의해서 iterator 타입으로 받게 됩니다.
이런 이유로 cbegin()과 cend(), crbegin(), crend()가 새롭게 추가되었습니다.
상수 반복자라는 의미로 앞에 c가 붙었습니다.
이렇게 되면 반복자가 가리키는 곳의 값을 변경할 수 없습니다.
*/


int main() {
 int i, num ;

       vector <int>         vec { 34, 35, 36, 37, 38, 39, 40 };
 const vector <int>    const_vec { 234, 335, 436, 537, 638, -740 };
       vector <int>:: iterator ivec ;


       ivec =  vec.begin(); // variable iterator
       cout << "Test 1: " << *(ivec) << "  " << *(ivec+1) << endl  ;
       cout << "Test 2: " << *const_vec.cbegin() << endl;         // constant iterator

       vec.push_back(-999);
       cout << "Test 3: " << *(vec.end()-1) << endl ;

       //const_vec.push_back(-777); // 이렇게 하면 오류가 난다.
       //cout << "Test 4: " << *(const_vec.end()-1) << endl ;


  return 0 ;

} // end of main()

