// 하나의 line string에 왕창 읽은 다음에 순서대로 token을 읽어낸다.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () {

    string mystr;
    float price=0;
    int quantity=0;

    cout << "Enter price: ";
    getline (cin,mystr);

    stringstream(mystr) >> price;
    cout << "Enter quantity: ";

    getline (cin,mystr);
    stringstream(mystr) >> quantity;

    cout << "Total price: " << price*quantity << endl;
    return 0;
}
