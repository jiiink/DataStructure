
#include <iostream>     // std::cout
#include <algorithm>    // std::find_if
#include <vector>       // std::vector
#include <list>

using namespace std ;

int main () {

  int   *p,    myints[] = { 10, 20, 30, 40 };
  vector <int>   myvec    {35,  6, 8,  13, 21, 83,  4} ;
  list   <int > mylist    {43, 32, 54, 13, 65, 50, 17} ;
  vector<int>::iterator vit;
  list  <int>::iterator lit;

  p = find (myints, myints+3, 30);
  cout << "\n >1 : 원소의 위치 : " << p - myints << endl ;
  p = find (myints, myints+3, 99);
  cout << "\n >2 : 원소의 위치 : " << p - myints << endl ;

  vit = find ( myvec.begin(), myvec.end(), 83);
  cout << "\n >3 : vit에서의 위치 : " << vit - myvec.begin()  << endl ;
  cout << "\n >4 : vit에서의 값  : " << *vit << endl ;

  vit = find ( myvec.begin(), myvec.end(), 99);
  cout << "\n >5 : vit에서의 위치 : " << vit - myvec.begin()  << endl ;
  cout << "\n >6 : vit에서의 값  : " << *vit << endl ;

  lit = find ( mylist.begin(), mylist.end(), 65);
//  cout << "\n >7 : lit에서의 위치 : " << lit - mylist.begin()  << endl ;
// list에서는 원소가 물리적으로 떨어져 있어 거리 계산이 안됩니다.
  cout << "\n >8 : lit에서의 값  : " << *lit << endl ;

  lit = find ( mylist.begin(), mylist.end(), 99);
  if (lit == mylist.end()) cout << "\n List에 없시유" ;
  cout << "\n >9 : 없을 때 lit에서의 값  : " << *lit << endl ;
  return 0;
}
