/*  See this : http://tree.phi-sci.com/ */

#include "tree.hh"
#include "tree_util.hh"
#include <bits/stdc++.h>
using namespace std;


//  Simple test program for the tree.hh class library.

bool truefunc(string& one, string& two) {
//	cout << "comparing " << one << "==" << two << endl;
    return true;
}

void print_tree(const tree<string>& tr, tree<string>::pre_order_iterator it, tree<string>::pre_order_iterator end) {
    if(!tr.is_valid(it))
        return;
    int rootdepth=tr.depth(it);
    cout << "-----" << endl;
    while(it!=end) {
        for(int i=0; i<tr.depth(it)-rootdepth; ++i)
            cout << "  ";
        cout << (*it) << endl << flush;
        ++it;
    }
    cout << "-----" << endl;
}

void print_tree_post(const tree<string>& tr, tree<string>::post_order_iterator it, tree<string>::post_order_iterator end) {
    int rootdepth=tr.depth(it);
    cout << "-----" << endl;
    while(it!=end) {
        for(int i=0; i<tr.depth(it)-rootdepth; ++i)
            cout << "  ";
        cout << (*it) << endl << flush;
        ++it;
    }
    cout << "-----" << endl;
}

void print_tree_rev(const tree<string>& tr, tree<string>::pre_order_iterator it, tree<string>::pre_order_iterator end) {
    --it;
    int rootdepth=0;//tr.depth(it);
    cout << "-----" << endl;
    while(1==1) {
        for(int i=0; i<tr.depth(it)-rootdepth; ++i)
            cout << "  ";
        cout << (*it) << endl;
        if(it==end)
            break;
        --it;
    }
    cout << "-----" << endl;
}

void print_tree_rev_post(const tree<string>& tr, tree<string>::post_order_iterator it, tree<string>::post_order_iterator end) {
    --it;
    int rootdepth=0;//tr.depth(it);
    cout << "-----" << endl;
    while(1==1) {
        for(int i=0; i<tr.depth(it)-rootdepth; ++i)
            cout << "  ";
        cout << (*it) << endl;
        if(it==end)
            break;
        --it;
    }
    cout << "-----" << endl;
}

int main(int argc, char **argv) {
    unsigned int maxloop=1;
    if(argc>1)
        maxloop=atoi(argv[1]);

    for(unsigned int j=0; j<maxloop; ++j) {
        tree<string> tr9;
        tr9.set_head("hi");
        tr9.insert(tr9.begin().begin(), "0");
        tr9.insert(tr9.begin().begin(), "1");
        print_tree(tr9, tr9.begin(), tr9.end());


        tree<string> tr;
        tree<string>::pre_order_iterator html, body, h1, h3, bh1, mv1;

        cout << "empty tree to begin with:" << endl;
        print_tree(tr, tr.begin(), tr.end());

        html=tr.insert(tr.begin(), "html");
        tr.insert(html,"extra");
//		tr.insert(html,"zextra2");
        body=tr.append_child(html, "body");
        h1  =tr.append_child(body, "h1");
        cout << tr.index(h1) << endl;
        bh1 =tr.insert(h1,"before h1");
        tr.append_child(h1, "some text");
        tree<string>::sibling_iterator more_text=tr.append_child(body, "more text");

        cout << " 'more text' is sibling " << tr.index(more_text) << " in its sibling range" << endl;

        cout << "filled tree:" << endl;
        print_tree(tr, tr.begin(), tr.end());

        cout << "filled tree, post-order traversal:" << endl;
        print_tree_post(tr, tr.begin_post(), tr.end_post());

        tr.swap(bh1);
        cout << "swapped elements:" << endl;
        print_tree(tr, tr.begin(), tr.end());
        tr.swap(h1);
        cout << "swapped back:" << endl;
        print_tree(tr, tr.begin(), tr.end());

        tree<string> copytree(h1);
        cout << "copied tree:" << endl;
        print_tree(copytree, copytree.begin(), copytree.end());

        // Now test the STL algorithms
        cout << "result of search for h1 and kasper:" << endl;
        tree<string>::pre_order_iterator it;
        it=find(tr.begin(),tr.end(),string("h1"));
        if(it!=tr.end())
            print_tree(tr, it, tr.next_sibling(it));
        else
            cout << "h1 not found" << endl;
        it=find(tr.begin(),tr.end(), string("kasper"));
        if(it!=tr.end())
            print_tree(tr, it, tr.next_sibling(it));
        else
            cout << "kasper not found" << endl;
        cout << endl;

        // remove the h1, replace it with new subtree
        tree<string> replacement;
        h3  =replacement.insert(replacement.begin(), "h3");
        replacement.append_child(h3, "text in h3");
        cout << "replacement tree:" << endl;
        print_tree(replacement, replacement.begin(), replacement.end());
        print_tree(tr, tr.begin(), tr.end());
        h1=tr.replace(tree<string>::sibling_iterator(h1), tr.next_sibling(h1),
                      tree<string>::sibling_iterator(h3), tr.next_sibling(h3));
        cout << "filled tree with replacement done:" << endl;
        print_tree(tr, tr.begin(), tr.end());

        // replace h3 node while keeping children
        h1=tr.replace(h1, "<foobar>");
        print_tree(tr, tr.begin(), tr.end());

        // add a sibling to the head
        tr.insert_after(h1, "more");

        // Copy object.
        tree<string> tr2=tr;
        print_tree(tr2, tr2.begin(), tr2.end());
        tree<string> tr3(tr);

        // reparent "before h1" to h3 node
        tr.reparent(h1, bh1, tr.next_sibling(bh1));
        cout << "moved content:" << endl;
        print_tree(tr, tr.begin(), tr.end());

        // iterate over children only
        tree<string>::sibling_iterator ch=tr.begin(h1);
        cout << "children of h1:" << endl;
        while(ch!=tr.end(h1)) {
            cout << (*ch) << endl;
            ++ch;
        }
        cout << endl;

        // flatten the h3 node
        tr.flatten(h1);
        cout << "flattened (at h3) tree:" << endl;
        print_tree(tr, tr.begin(), tr.end());

        // Erase the subtree of tr below body.
        tr.erase_children(body);
        cout << "children of body erased:" << endl;
        print_tree(tr, tr.begin(), tr.end());
        it=find(tr.begin(),tr.end(),"h1");
        if(it!=tr.end())
            print_tree(tr, it, tr.next_sibling(it));
        else
            cout << "h1 not found" << endl;

        // Erase everything
        tr.erase(tr.begin());
        cout << "erased tree:" << endl;
        print_tree(tr, tr.begin(), tr.end());

        // The copies are deep, ie. all nodes have been copied.
        cout << "copies still exist:" << endl;
        print_tree(tr2, tr2.begin(), tr2.end());
        print_tree(tr3, tr3.begin(), tr3.end());

        // Test comparison
        cout << "testing comparison functions:" << endl;
        cout << equal(tr2.begin(), tr2.end(), tr3.begin(), equal_to<string>())
                  << " (should be 1)" << endl;
        // modify content but not structure
        tree<string>::pre_order_iterator fl3=tr3.begin();
        fl3+=4; // pointing to "<foobar>" node
        cout << (*fl3) << endl;
        string tmpfl3=(*fl3);
        (*fl3)="modified";
        cout << equal(tr2.begin(), tr2.end(), tr3.begin(), equal_to<string>())
                  << " (should be 0)" << endl;
        cout << tr2.equal(tr2.begin(), tr2.end(), tr3.begin(), equal_to<string>())
                  << " (should be 0)" << endl;
        cout << tr2.equal(tr2.begin(), tr2.end(), tr3.begin(), truefunc)
                  << " (should be 1)" << endl;
        // modify tr3 structure (but not content)
        (*fl3)=tmpfl3;
        tr3.flatten(fl3);
        cout << "tree flattened, test again" << endl;
        print_tree(tr3, tr3.begin(), tr3.end());

        // Test comparison again
        cout << tr2.equal(tr2.begin(), tr2.end(), tr3.begin(), equal_to<string>())
                  << " (should be 0)" << endl;
        cout << equal(tr2.begin(), tr2.end(), tr3.begin(), equal_to<string>())
                  << " (should be 1)" << endl;
        // Change content
        (*fl3)="modified";
        // Test comparison again
        cout << equal(tr2.begin(), tr2.end(), tr3.begin(), equal_to<string>())
                  << " (should be 0)" << endl;
        cout << tr2.equal(tr2.begin(), tr2.end(), tr3.begin(), equal_to<string>())
                  << " (should be 0)" << endl;

        // Testing sort. First add a subtree to one leaf
        tree<string>::pre_order_iterator txx3=tr3.begin();
        txx3+=5;
        tr3.append_child(txx3,"ccc");
        tr3.append_child(txx3,"bbb");
        tr3.append_child(txx3,"bbb");
        tr3.append_child(txx3,"aaa");
        less<string> comp;
        tree<string>::pre_order_iterator bdy=tr3.begin();
        bdy+=2;
        assert(tr.is_valid(bdy));
        cout << "unsorted subtree:" << endl;
        print_tree(tr3, tr3.begin(), tr3.end());
        tree<string>::sibling_iterator sortit1=tr3.begin(bdy), sortit2=tr3.begin(bdy);
        sortit1+=2;
        sortit2+=4;
        assert(tr.is_valid(sortit1));
        assert(tr.is_valid(sortit2));
        cout << "partially sorted subtree: ("
                  << "sorted from " << (*sortit1) << " to "
                  << (*sortit2) << ", excluding the last element)" << endl;


        mv1=tr3.begin();
        ++mv1;
        tr3.sort(sortit1, sortit2);
        print_tree(tr3, tr3.begin(), tr3.end());
        tr3.sort(tr3.begin(bdy), tr3.end(bdy), comp, true); // false: no sorting of subtrees
//    Sorting the entire tree, level by level, is much simpler:
//		tr3.sort(tr3.begin(), tr3.end(), true);
        cout << "sorted subtree:" << endl;
        print_tree(tr3, tr3.begin(), tr3.end());

        // Michael's problem
//		cout << mv1.node << ", " << tr3.feet << ", " << tr3.feet->prev_sibling << endl;
//		cout << mv1.node->next_sibling << ", " << tr3.feet->prev_sibling << ", " << tr3.end().node << endl;
//		tr3.sort(tr3.begin(), tr3.end(), true);
//		cout << mv1.node << ", " << tr3.feet << ", " << tr3.feet->prev_sibling << endl;
//		cout << mv1.node->next_sibling << ", " << tr3.feet->prev_sibling << ", " << tr3.end().node << endl;
//		print_tree(tr3, tr3.begin(), tr3.end());
//		tr3.sort(tr3.begin(), tr3.end(), true);
//		cout << mv1.node << ", " << tr3.feet << ", " << tr3.feet->prev_sibling << endl;
//		cout << mv1.node->next_sibling << ", " << tr3.feet->prev_sibling << ", " << tr3.end().node << endl;
//		print_tree(tr3, tr3.begin(), tr3.end());
//		return 1;

        // Test merge algorithm.
        cout << "test merge" << endl;
        tree<string> mtree;
        tree<string>::pre_order_iterator mt1, mt2, mt3;
        mt1=mtree.insert(mtree.begin(),"html");
        mt2=mtree.append_child(mt1,"head");
        mt3=mtree.append_child(mt1,"body");
// Adding it without head having any children tests whether we can
// insert at the end of an empty list of children.
        mtree.append_child(mt2,"title");
        mtree.append_child(mt3,"h1");
        mtree.append_child(mt3,"h1");

        tree<string> mtBree;
        tree<string>::pre_order_iterator mtB1, mtB2;
        mtB1=mtBree.insert(mtBree.begin(),"head");
        mtB2=mtBree.append_child(mtB1,"another title");
        print_tree(mtree, mtree.begin(), mtree.end());
        print_tree(mtBree, mtBree.begin(), mtBree.end());

        mtree.merge(mtree.begin(), mtree.end(), mtBree.begin(), mtBree.end(), true);
        print_tree(mtree, mtree.begin(), mtree.end());
        mtree.merge(mtree.begin(mtree.begin()), mtree.end(mtree.begin()), mtBree.begin(), mtBree.end(), true);
        print_tree(mtree, mtree.begin(), mtree.end());

        // Print tree in reverse (test operator--)
        print_tree_rev(mtree, mtree.end(), mtree.begin());
        print_tree_rev_post(mtree, mtree.end_post(), mtree.begin_post());

        // Breadth-first
        tree<string> bft;
        tree<string>::iterator bfB,bfC,bfD;
        bft.set_head("A");
        bfB=bft.append_child(bft.begin(), "B");
        bfC=bft.append_child(bft.begin(), "C");
        bfD=bft.append_child(bft.begin(), "D");
        bft.append_child(bfB, "E");
        bft.append_child(bfB, "F");
        bft.append_child(bfC, "G");
        bft.append_child(bfC, "H");
        bft.append_child(bfD, "I");
        tree<string>::breadth_first_queued_iterator bfq=bft.begin_breadth_first();
        while(bfq!=bft.end_breadth_first()) {
            cout << *bfq << endl;
            ++bfq;
        }

        print_tree(bft, bft.begin(), bft.end());
        bft.wrap(bfD, "wrap");
        print_tree(bft, bft.begin(), bft.end());

        tree<string>::leaf_iterator li=tr.begin_leaf(bfC);
        while(li!=tr.end_leaf(bfC)) {
            cout << *li << endl;
            ++li;
        }

//		test_move_constructor();

    }
}

