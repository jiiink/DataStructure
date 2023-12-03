/*
Compiler >> Setting >> #define
   CHO=1234

>> g++ -D CHO x.cpp  // defineA≫ optionA≫ AU ¶§

*/
#include <iostream>
using namespace std;

#define X 30    //macro definition
int Y = 10; //global integer constantt

#ifdef CHO
  float W = 100.0 ;
#else
  float W = -100.0 ;
#endif // CHO

int main() {

	const  int Z = 30; //local ineteger constant`

	cout<<"Value of X:  "<< X <<endl;
	cout<<"Value of Y:  "<< Y <<endl;
	cout<<"Value of Z:  "<< Z <<endl;
	cout<<"Value of W:  "<< W <<endl;

	return 0;
}
