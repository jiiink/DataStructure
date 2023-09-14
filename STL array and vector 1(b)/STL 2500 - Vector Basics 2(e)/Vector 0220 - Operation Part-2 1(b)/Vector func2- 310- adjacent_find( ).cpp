#include <iostream>     //cout
#include <algorithm>    //adjacent_find
#include <vector>       //vector
using namespace std ;

// 인접한 원소끼리 어떤 특정한 조건을 만족하는지를 찾아낼 때

bool myfunction (int i, int j) {
  return ( abs(i-j) <= 3 ) ;  //  연속한 원소끼리 3 이하 차이가 나는 경우
}

int main () {


  vector<int> myvector = {  5, 14, 15, 44, 51, 30, 30, 10, 12, 63, 62};
  vector<int>::iterator it;

  // using default comparison은 인접한 원소끼리 같은 경우 :
  it =adjacent_find (myvector.begin(), myvector.end());

  if (it!=myvector.end())
   cout << "\n 연속해서 나타난 같은 원소: " << *it << '\n';

  //using predicate comparison:
  it = adjacent_find (myvector.begin(), myvector.end(), myfunction);

  if (it!=myvector.end())
   cout << " myfuntion( )으로 검사된 결과: " << *it << '\n';

  return 0;
}
