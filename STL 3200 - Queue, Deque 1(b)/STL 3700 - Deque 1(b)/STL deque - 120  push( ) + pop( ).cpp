// 양쪽 끝이 뚫려있는 deque 사용법
#include <iostream>
#include <deque>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

#define allout(MSG,X)   cout<<"\n "<<MSG<<"\n ";for(auto w:X)cout<<w<<", "

int main() {

  deque <int>  intbar {  34, 23, 55, 8, -90, 13, 26, -20, 83, 1 };

  cout << "Size() = " << intbar.size() << endl ;
  allout(" 시작 intbar[]= ", intbar ) ;
  intbar.pop_back() ;
  intbar.pop_back() ;
  intbar.pop_front() ;
  allout(" 이후 intbar[]= ", intbar ) ;
  return 0;
} // end of main( )
