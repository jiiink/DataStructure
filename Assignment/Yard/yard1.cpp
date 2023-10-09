#include <bits/stdc++.h>
using namespace std;

vector< stack<int> > yard;
// stack<int> containers; 

void print_yard() {
	cout << "---------------\n";
	for (auto& c : yard) {
		stack<int> copy = c;
		vector<int> v;

		while (!copy.empty()) {
			v.push_back(copy.top());
			copy.pop();
		}
		for (auto position = v.rbegin(); position != v.rend(); position++) {
			cout << *position << " ";
		}
		cout << endl;
	}
}

void output() {

}


void process() {

}


void input() {
	int N;
	cin >> N;
	while (N--) {
		int n;
		stack<int> containers;
		cin >> n;

		if (n == 0) {
			containers.push(0);
		}
		while (n--) {
			int container;
			cin >> container;
			containers.push(container);
		}
		yard.push_back(containers);
	}
}

int main() {
	input();
	
	print_yard();
	
	process();
	output();
	return 0;
}
