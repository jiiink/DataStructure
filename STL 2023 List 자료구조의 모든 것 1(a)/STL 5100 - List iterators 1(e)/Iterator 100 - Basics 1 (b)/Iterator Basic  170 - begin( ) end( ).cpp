/*   it = cbegin()/cend() ;
Returns a const_iterator pointing to the first element in the container.
A const_iterator is an iterator that points to const content.
This iterator can be increased and decreased (unless it is itself also const),
just like the iterator returned by list::begin, but it cannot be used to
modify the contents it points to, even if the list object is not itself const.
If the container is empty, the returned iterator value shall not be dereferenced.
*/

#include <bits/stdc++.h>
using namespace std;


int main () {
  list<int> mylist   = {75,23,65,42,13};
  list<int> yourlist = { 27 , 33, 46, 54, 63, 70, 82 };
  list<int>::iterator it ;

  cout << "mylist contains:";
  for ( it=mylist.begin(); it != mylist.end(); ++it)
    cout << "\n mylist[]= " <<  *it;

  cout << "\n\n cbegin()를 사용하는 방법 " ;
  for ( auto ait = yourlist.cbegin(); ait != yourlist.cend(); ++ait)
     cout << "\n yourlist[]= " <<  *ait;


  for(auto w : yourlist){  // range-based for loop
    cout << "\n -- " << w ;
  }
  return 0;
}
