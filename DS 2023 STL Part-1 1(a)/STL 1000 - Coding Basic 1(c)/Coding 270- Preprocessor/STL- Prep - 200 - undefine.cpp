#include <iostream>
using namespace std;

//macro definition
#define X 30

int main(){

	cout<<"Value of X: "<<X<<endl;
#undef X

	cout<<"Value of X: "<<X<<endl;

	return 0;
}
