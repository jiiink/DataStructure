#include <iostream>
#include "tree_new.hh"
#include "tree_util.hh"
using namespace std ;

tree<string> test_move_constructor() {
    tree<string> mtree;
    tree<string>::iterator it = mtree.set_head("top");
    mtree.append_child(it, "one");
    mtree.append_child(it, "two");
    mtree.append_child(it, "three");

    tree<string> ctree(move(mtree));

    cout << "ctree:" << endl;
    kptree::print_tree_bracketed(ctree);
    cout << "\nmtree:" << endl;
    kptree::print_tree_bracketed(mtree);

    return ctree;
}

tree<string> test_move_out() {
    tree<string> mtree;
    tree<string>::iterator it = mtree.set_head("top");
    mtree.append_child(it, "one");
    auto it2 = mtree.append_child(it, "two");
    mtree.append_child(it, "three");
    mtree.append_child(it2, "four");
    mtree.append_child(it2, "five");

    auto ret = mtree.move_out(it2);
    ret.debug_verify_consistency();
    return ret;
}

void test_move_in(tree<string>& other) {
    tree<string> mtree;
    tree<string>::iterator it = mtree.set_head("top");
    mtree.append_child(it, "one");
    auto it3=mtree.append_child(it, "three");

    mtree.move_in(it3, other);
    mtree.debug_verify_consistency();
    kptree::print_tree_bracketed(mtree);
    cout << "\n";
}

void test_move_in_as_nth_child(int n) {
    tree<string> mtree, other;
    tree<string>::iterator it = mtree.set_head("top");
    mtree.append_child(it, "one");
    mtree.append_child(it, "three");

    auto ot1 = other.set_head("hi");
    other.insert_after(ot1, "second");
    other.append_child(ot1, "1");
    other.append_child(ot1, "2");

    mtree.move_in_as_nth_child(it, n, other);
    mtree.debug_verify_consistency();
    kptree::print_tree_bracketed(mtree);
    cout << "\n";
}

void test_move_below(tree<string>& other) {
    tree<string> mtree;
    tree<string>::iterator it = mtree.set_head("top");
    mtree.append_child(it, "one");
    auto it3=mtree.append_child(it, "three");

    mtree.move_in(it3, other);
    kptree::print_tree_bracketed(mtree);
}


int main(int argc, char **argv) { 	// Move constructor.

    tree<string> res = test_move_constructor();
    cout << "처음 만든 트리 :" << endl;
    kptree::print_tree_bracketed(res);

    tree<string> res2 = test_move_out(); // Move out.
    cout << "\n move_out( )후의 트리:" << endl;
    kptree::print_tree_bracketed(res2);
    cout << endl;

    cout << "\n move_in( )후의 트리:" << endl;
    test_move_in(res2); 	// Move in.
    kptree::print_tree_bracketed(res2);


    test_move_in_as_nth_child(0); 	// Move in as nth child.
    test_move_in_as_nth_child(1);
    test_move_in_as_nth_child(2);
    try {
        test_move_in_as_nth_child(3);
    } catch(const range_error& ex) {
        cout << ex.what() << endl;
    }
} // end of main()
