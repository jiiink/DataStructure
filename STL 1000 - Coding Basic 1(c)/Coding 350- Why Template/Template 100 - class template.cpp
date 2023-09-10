#include <iostream>
using namespace std;

template <typename T>
class mypair {
	T values[2];
public:
	mypair(T first, T second) 	{
		values[0] = first; values[1] = second;
	}
	void myout( ) {
		cout << " first: " << values[0] <<  " second: " << values[1] ;
	}
};

int main() {
	mypair<double> Zpair(1.2, 3.4);
	Zpair.myout() ;

	return 0;
}
