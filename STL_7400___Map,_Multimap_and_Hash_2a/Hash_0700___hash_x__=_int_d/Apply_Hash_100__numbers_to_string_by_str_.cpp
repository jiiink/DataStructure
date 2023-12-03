#include <iostream>
#include <sstream>
using namespace std ;

int main() {
	int i = 12398736;
	std::stringstream ssInt;
	ssInt << i;
	cout << "\n ssInt= " << ssInt.str() ;
	cout << "\n sizeof(ssInt)= " <<  sizeof(ssInt) ;

	for(i=0; i <= 10 ; i++){
			ssInt << i;
		cout << "\n i=" << i << "  ssInt= " << ssInt.str() ;
	}

	double d = 192.345654;
	std::stringstream ssDouble;
	ssDouble << d;
	cout << "\n sizeof(ssDouble)= " <<  sizeof(ssDouble) ;

	std::cout << "\n ssInt.str( )= " << ssInt.str() << std::endl;
	std::cout << "\n ssDouble.str( )= "<< ssDouble.str() << std::endl;

	return 0;
}
