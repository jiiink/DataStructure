
#include <fstream>
#include <iostream>
using namespace std;

int main () {
    char subject[200];
    ofstream of;
    of.open("cintest.txt");

    cout << "Here we are writing this to the file" << endl;
    cout << "My name is Ranjan Kumar pandey";
    cin.getline(subject, 200);

    of << subject << endl;

    cout << "Enter your age: ";
    cin >> subject;
    cin.ignore();

    of << subject << endl;
    of.close();

    ifstream inf;  // Here we are opening the file in read purpose
    inf.open("test.txt");
    cout << "is the file contents" << endl;
    inf >> subject;
    cout << subject << endl;

    inf >> subject; // Here we are again going to read the file data and also we are displaying the data
    cout << subject << endl; // Here we are performing closing of the file which we have opened

    inf.close();
    return 0;
}


