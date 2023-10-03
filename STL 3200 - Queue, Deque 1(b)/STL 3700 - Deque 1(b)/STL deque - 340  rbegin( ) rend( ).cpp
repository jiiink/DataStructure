#include <iostream>
#include <deque>
#define allout(MSG,X)   cout<<"\n\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;

int main () {

  deque<int> mydeque (5);  // 5 default-constructed ints

  deque<int>::reverse_iterator rit = mydeque.rbegin();

  int i=0;
  for (rit = mydeque.rbegin(); rit!= mydeque.rend(); ++rit)
    *rit = ++i*100 ;

  allout("mydeque[] ", mydeque) ;

  return 0;
}
