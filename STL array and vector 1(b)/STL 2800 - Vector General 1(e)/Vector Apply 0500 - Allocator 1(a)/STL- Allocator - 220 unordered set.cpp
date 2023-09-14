#include <bits/stdc++.h>
using namespace std;

int main() {

	unordered_set <int> c;  //'c' is object of 'unordered_set'

	//'allocator_type' is inherit in 'unordered_set'
	//'a' is object of 'allocator_type'
	//'get_allocator()' is member of 'unordered_set'
	unordered_set<int>::allocator_type a = c.get_allocator();

	cout << "Is allocator Pair<int, int> : "
		 << boolalpha
		 << (a == allocator<pair<int, int> >());

	return 0;
}
