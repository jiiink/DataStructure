// 일반적인 트리를 구현할 수 있는 STL-like 구조

#include <algorithm>
#include <string>
#include <iostream>
#include "tree_new.hh"

using namespace std;

int main(int, char **)    {

   tree<string> tr;
   tree<string>::iterator top, one, xone, two, loc, banana, cherry;

   top=tr.begin();
   one=tr.insert(top, "One"); // root 만들기

   two=tr.append_child(one, "Two"); // tree tr에서 node "one"의 자식에 two를 매담.
   tr.append_child (two, "apple");

   banana=tr.append_child(two,  "banana");
   cherry = tr.append_child(banana, "cherry");

   tr.append_child(cherry, "iphone");
   tr.append_child(two,    "Orange");
   tr.append_child(two,    "Papaya");
   tr.append_child(one,    "three");

   loc=find(tr.begin(), tr.end(), "Two");

   if(loc!=tr.end()) {
        tree<string>::sibling_iterator sib=tr.begin(loc);
        cout << "Two의 모든 Child = { " ;
        while(sib!=tr.end(loc)) {
            cout << (*sib) << ", " ;
            ++sib;
        } // end of while{}
        cout << "} " << endl ;

        cout << "\n One node의 depth보다 -2인 노드를 모두 출력 \n" ;
        loc=find(tr.begin(), tr.end(), "One");
        tree<string>::iterator sib2=tr.begin(loc);
        tree<string>::iterator end2=tr.end(loc);

        cout << "\nOne " << endl ;
        while(sib2!=end2) {
            for(int i=0; i < tr.depth(sib2); ++i)
                    cout << "---> ";
            cout << (*sib2)<< "(" << tr.depth(sib2)<< ")" << endl;
            ++sib2;
        } // end of while
   } // end of if()

} // end of main()
