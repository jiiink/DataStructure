#include <bits/stdc++.h>
using namespace std;

typedef vector<int> intvec;

int main() {
    vector < intvec > buff;
	vector < intvec >::iterator ivit ;
    vector <int>::iterator it ;


    for(int i = 0; i < 10; i++)     {
        intvec temp; // create an array, don't work directly on buff yet.
        for(int j = 0; j < 10; j++) temp.push_back(10*i+j);
         buff.push_back(temp); // Store the array in the buffer
    }

    for( ivit = buff.begin(); ivit != buff.end(); ++ivit) {
        for( it = ivit->begin(); it != ivit->end(); ++it) {
             cout << *it << "- " ;
        }         cout << endl;
    }

    return 0;

} // end of main( )




