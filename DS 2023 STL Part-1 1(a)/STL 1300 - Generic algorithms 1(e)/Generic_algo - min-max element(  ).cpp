#define vout(msg,x)    cout<<"\n"<<msg;for(auto s:x) cout << "  " << s ;

#include <iostream>     // cout
#include <algorithm>    //
#include <vector>       // vector
using namespace std;


int main() {

	vector<int> vec = { 34, 41, 200, 69, 18, 610 };


	vector<int>::iterator xmin = min_element( vec.begin(), vec.end());
	auto xmax = max_element( vec.begin(), vec.end()); // iterator를 returng해준다.

	cout << "xmin : " << xmin - vec.begin() << endl;
	cout << "xmax : " << xmax - vec.begin() << endl;

	cout << "xmin : " << *xmin << endl;
	cout << "xmax : " << *xmax << endl;


	vector <double> dvec = { 12.3, 56.4, 3.452, 0.496, 38.0, 1.01290 };

	auto dmin = *min_element( dvec.begin(), dvec.end());
	auto dmax = *max_element( dvec.begin(), dvec.end()); // *iterator는 값 그 자체 .

	cout << "dmin : " << dmin << endl;
	cout << "dmax : " << dmax << endl;


} // end of main( )
