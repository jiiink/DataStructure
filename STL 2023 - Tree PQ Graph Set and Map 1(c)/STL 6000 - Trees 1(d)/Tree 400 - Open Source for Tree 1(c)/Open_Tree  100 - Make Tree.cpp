// Open source tree.hh 를 이용한 Tree 만들기

#include <iostream>
#include "tree_new.hh"    // 이걸 넣어야 합니다. 여러분들도 나중에 이렇게 만드세요.
#include "tree_util.hh"
using namespace std ;



int main(int, char **) {

	tree <int> tr;

	tr.insert(tr.begin(), 1);
	tree <int>::iterator i2 = tr.insert(tr.end(), 2);
	tree <int>::iterator i3 = tr.append_child( i2, 3);
	tree <int>::iterator i4 = tr.insert(tr.end(), 4);

	tr.append_child(i2,  7);
	tr.append_child(i3,  8);
	tr.append_child(i3,  9);
	tr.append_child(i3, 11);
	tr.append_child(i4, 15);

	tree<int>::iterator i5 = tr.append_child( i4, 99);
	tr.append_child(i5, -33) ;

	kptree::print_tree_bracketed(tr, cout);

	// Q, 이 구조 tr에서 모든 leaf node를 출력하는 함수 show_all_leaf( T ) 를 만들어 봅시다.


} // end of main()
