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
  list  <int> mylist   = { 75, 23, 65, 42, 13};
  vector<int> molist   = { 75, 23, 65, 42, 13};
  list<int>::iterator it ;

  cout << "molist contains:";
  for ( auto vt=molist.begin(); vt != molist.end(); ++vt)
    cout << "\n molist[" << vt-molist.begin() <<  "]= " <<  *vt;

  cout << "\n\nmylist contains:";
  for ( it=mylist.begin(); it != mylist.end(); ++it)
    cout << "\n mylist[" << distance(mylist.begin(), it) << "]= " <<  *it;


  return 0;
}
