#include <bits/stdc++.h>

using namespace std;

// void Josh(vector<int> person, int k, int index)
// {
// 	// Base case , when only one person is left
// 	if (person.size() == 1) {
// 		cout << person[0] << endl;
// 		return;
// 	}

// 	// find the index of first person which will die
// 	index = ((index + k) % person.size());

// 	// remove the first person which is going to be killed
// 	person.erase(person.begin() + index);

// 	// recursive call for n-1 persons
// 	Josh(person, k, index);
// }

int main()
{
	int n = 15; 
	int k = 2;
	k--;
	int index = 0;

	vector<int> person;

	for (int i = 1; i <= n; i++) {
		person.push_back(i);
	}

    int i = 0;
    for (int j=0; j<20; j++) {
        while (person.begin() + i != person.end()) {
            cout << *(person.begin() + i) << " ";
            i++;
        }
        i = 0;
    }

	// Josh(person, k, index);
}
