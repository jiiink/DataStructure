#include <bits/stdc++.h>
using namespace std;

vector< stack<int> > yard;
int max_size;
int top = 0;
int min_size;
int max_index = 0;
int min_index = 0;

void print_yard() {
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
        if (v.empty()) cout << '0';
        cout << endl;
    }
}


void find_min_max() {
    max_size = 0;
	min_size = 10000;
	
	int index = 0;
    for (auto& s : yard) {
        if (s.size() < min_size) {
            min_size = s.size();
			min_index = index;
        }

        if (s.empty()) {
            index++;
            continue;
        }
        if (s.size() > max_size) {
            max_size = s.size();
			top = s.top();
			max_index = index;
        } else if (s.size() == max_size && s.top() > top) {
			max_size = s.size();
			top = s.top();
			max_index = index;
		}
		index++;
    }
}

void move(int max_index, int min_index) {
	yard[min_index].push(yard[max_index].top());
	yard[max_index].pop();
	
    find_min_max();
}


void process() {
    find_min_max();

	move(max_index, min_index);
}


void input() {
    int N;
    cin >> N;
    while (N--) {
        int n;
        stack<int> containers;
        cin >> n;

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
  
	do {
		process();
	} while ((max_size - min_size) > 1);
    
	print_yard();
    return 0;
}

