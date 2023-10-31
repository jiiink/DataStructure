// tree.hh 를 이용한 sample code
// 김성환 박사 수정판

#include "tree_new.hh"
#include "tree_util.hh"
using namespace std ;

#include <iostream>

typedef pair<int,string> tnode ;

std::ostream& operator << (std::ostream& os, const tnode& v ) {
    os << v.first << ' ' << v.second;
    return os;
}

int main(int, char **) {

    tnode x, y, z, t ;
	tree <tnode> tr, tl;
    x = make_pair(3, "Kol" ) ;
	tr.insert(tr.begin(), x );

	y = make_pair( 56, "apple") ;
	z = make_pair( 32, "banana") ;
	tree <tnode>::iterator i2 = tr.insert(tr.end(), y);
	tree <tnode>::iterator i3 = tr.insert(tr.end(), z);

	t = make_pair( 5, "Summer") ;
	tr.append_child(i2, t);
	t = make_pair( -11, "Winter") ;
	tr.append_child(i3, t );

    t = make_pair( 300, "Spring") ;
	tree<tnode>::iterator i4 = tr.insert(tr.end(), t);

	kptree::print_tree_bracketed(tr, cout);


} // end of main()
