#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

#define pp pair<int,int>

using namespace std;

map<int, int> m { {1,34},{5,6}, {11,54}, {31,3},\
             {91,21}, {71,45}, {6,3}, {-41,-5}, {32,0} } ;

bool cmp(const pp& a, const pp& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main() {

	for (auto num : m) {
		cout << "key: " << num.first << " | value: " << num.second << "\n";
	}

	cout << "\n=======sort========\n\n";

	vector<pp> vec( m.begin(), m.end() );
	sort(vec.begin(), vec.end(), cmp);

	for (auto num : vec) {
		cout << "key: "<< num.first << " | value: " << num.second << "\n";
	}

	return 0;
}
