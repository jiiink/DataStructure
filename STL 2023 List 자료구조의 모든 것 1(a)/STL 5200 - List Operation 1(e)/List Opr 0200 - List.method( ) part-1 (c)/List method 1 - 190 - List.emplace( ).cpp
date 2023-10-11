/*
< Construct and insert element > (중간 temp 변수가 필요하지 않다. )

The container is extended by inserting a new element at position.
This new element is constructed in place using args as the arguments
for its construction. This effectively increases the container size by one.

Unlike other standard sequence containers,
list and forward_list objects are specifically designed to be efficient
inserting and removing elements in any position,
even in the middle of the sequence.

The element is constructed in-place by calling allocator_traits::construct
with args forwarded.
A similar member function exists, insert, which either copies or moves existing
objects into the container.

*/

#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define pairout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w.first<<"|"<<w.second<<" , "


int main () {
    list  < pair<int,char> > mylist { {4,'w'}, {8,'#'} } ;
    vector< pair<int,char> > myvec  { {4,'U'}, {8,'O'} } ;

    pairout("1. mylist[]= ", mylist ) ;
    mylist.emplace ( mylist.begin(), 100, 'x' );
    pairout("2. mylist[]= ", mylist ) ;
    mylist.emplace ( --mylist.end(), 200, 'y' );

    pairout("3. mylist[]= ", mylist ) ;
    mylist.emplace_front(  7, 'A' );
    mylist.emplace_back ( 54, '$' );

    pairout("4. mylist[]= ", mylist ) ;
    pairout("5. myvec[]= ",  myvec ) ;
    return 0;
}
