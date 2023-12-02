
#include <bits/stdc++.h>
using namespace std ;


int main(){

  int array1[] = { 1, 2, 3, 4, 5, 6 ,7, 8};
  for_each( begin(array1), end(array1), [](int v){ cout << v << " "; });

  cout << endl;


  int sum = 0;

  // 함수형 코딩 사용하기
  for_each(begin(array1), end(array1), [&sum](int v) { sum += v; });
  cout << "sum of array{1, 2, 3, 4, 5, 6, 7, 8}: " << sum << endl;


  for_each(begin(array1), end(array1), [](int& v) { v=v*v; });
  for_each(begin(array1), end(array1), [](int v){ cout << v << " "; });
  cout << endl;

  cout << endl;

}
