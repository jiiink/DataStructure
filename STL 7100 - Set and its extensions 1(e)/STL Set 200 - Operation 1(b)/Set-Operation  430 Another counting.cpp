//set09.cpp

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    cout << "\nThis program illustrates the count() member function "
        "for sets.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFirst we create an array of name strings, and\nthen a set "
        "of name strings from that array.";
    string a[] = {"Tom", "Dick", "Harry", "Alice"};
    set<string> s(a, a+4);
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nHere are the " << s.size() << " names in the set:\n";
    set<string>::iterator p = s.begin();
    while (p != s.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nThe number of times Dick appears in the set is "
        << s.count("Dick") << ".";
    cout << "\nThe number of times Bob appears in the set is "
        << s.count("Bob") << ".";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
