#include <algorithm>
#include <string>
#include <iostream>
#include "tree_new.hh"

using namespace std;

void show_child(tree <string> tr, string x ) {
     tree <string>::sibling_iterator sib ;
     tree <string>::iterator loc ;

    cout << "Child( " << x << ") = { " ;
    loc=find(tr.begin(), tr.end(), x );
	if(loc!=tr.end()) {
       sib=tr.begin(loc);
	   while(sib!=tr.end(loc)) {
         cout << (*sib) << ", "  ;
         ++sib;
       } // end of while()
     }
     cout << " } " ;
} // end of print_child()

void show_subtree( tree <string> tr, string x ) {
     tree <string>::sibling_iterator sib ;
     tree <string>::iterator loc, sib2, end2 ;

     loc=find(tr.begin(), tr.end(), x );
     sib2  = tr.begin(loc);
     end2  = tr.end(  loc);

     cout << "\nAll sub nodes( " << x << ") \n " ;

	if(loc!=tr.end()) {
       while(sib2!=end2) {
            for(int i=0; i<tr.depth(sib2)-2; ++i)
                    cout << "  ";
            cout << (*sib2) << endl;
            ++sib2;
       } // end of while()
     }
} // end of print_subtree()

int main(int, char **) {
    string x ;
    tree <string> tr;
    tree <string>::iterator top, one, two, loc, banana, cherry;
    tree <string>::sibling_iterator sib ;

    top = tr.begin();
    one = tr.insert(top, "one");
    two = tr.append_child(one, "two");
    tr.append_child(two, "apple");

	banana = tr.append_child(two, "banana");
	cherry = tr.append_child(banana, "cherry");
	tr.append_child(two,    "peach");
    tr.append_child(one,    "three");
    tr.append_child(cherry,    "Piano");
    tr.append_child(cherry,    "Viloin");

    cout << "\n two의 모든 child를 보임\n" ;
    show_child  ( tr, "two") ;
    cout << "\n one의 모든 subtree를 보임\n" ;
	show_subtree( tr, "one") ;

	// 부모 노드 출력하기
	cout << "\n 부모노드 출력하기\n" ;
	x = "two" ;
	loc=find(tr.begin(), tr.end(), x );
	cout << "\n " << x << "의 부모노드는 = " << *(tr.parent(loc)) ;


} // end of main()
