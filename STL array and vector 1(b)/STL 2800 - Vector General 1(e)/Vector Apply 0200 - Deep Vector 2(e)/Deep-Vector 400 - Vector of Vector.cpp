#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector < vector<int> > buff;
	vector < vector<int> >::iterator it ;
    vector <int>::iterator jt ;

	for(int i = 0; i < 10; i++) {
		vector<int> temp; // create an array, don't work directly on buff yet.
		for(int j = 0; j < 10; j++) temp.push_back(i);
		buff.push_back(temp); // Store the array in the buffer
	}

	for( it = buff.begin(); it != buff.end(); ++it) {
        cout << "\n" << (it-buff.begin()) << "==>  " ;
		for( jt = it->begin(); jt != it->end(); ++jt) {
			// jt is now a pointer to an integer.
			cout << *jt << " ";
		}
		cout << endl;
	}

	return 0;
}
