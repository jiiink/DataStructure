#include <iostream>
#include <string>
#include <set>
using namespace std;

struct lexical_compare {
	bool operator() (int a, int b) const {
		return to_string(a) < to_string(b);
	}
};

int main() {
    set<int, lexical_compare> s;

    s.insert(1);
    s.insert(10);
    s.insert(11);
    s.insert(100);
    s.insert(11011);
    s.insert(01000);
    s.insert(231);
    s.insert(1230);

    for (int x : s)
        cout << x << " \n";

    return 0;
}
