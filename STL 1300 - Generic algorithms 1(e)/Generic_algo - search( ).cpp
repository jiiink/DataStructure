// search algorithm example
#include <iostream>     //cout
#include <algorithm>    //search
#include <vector>       //vector
using namespace std ;

bool mypredicate (int i, int j) {
  return (i==j);
}

int main () {

  vector<int> haystack { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
  int needle1[] = {44,50,60,70};
  vector<int>::iterator it;

  it =search (haystack.begin(), haystack.end(), needle1, needle1+4);

  if (it!=haystack.end())
   cout << "needle1을 위치에서 찾음 " << (it-haystack.begin()) << '\n';
  else
   cout << "needle1을 못찾음 \n";


  int needle2[] = {20,30,50};
  it =search (haystack.begin(), haystack.end(), needle2, needle2+3, mypredicate);

  if (it!=haystack.end())
   cout << "needle2를 위치에서 찾음 " << (it-haystack.begin()) << '\n';
  else
   cout << "needle2을 못찾음\n";

  return 0;
}
