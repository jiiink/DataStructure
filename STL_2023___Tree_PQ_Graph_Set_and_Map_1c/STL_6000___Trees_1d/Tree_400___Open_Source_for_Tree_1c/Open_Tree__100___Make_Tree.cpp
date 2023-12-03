// Open source tree.hh �� �̿��� Tree �����

#include <iostream>
#include "tree_new.hh"    // �̰� �־�� �մϴ�. �����е鵵 ���߿� �̷��� ���弼��.
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

	// Q, �� ���� tr���� ��� leaf node�� ����ϴ� �Լ� show_all_leaf( T ) �� ����� ���ô�.


} // end of main()
