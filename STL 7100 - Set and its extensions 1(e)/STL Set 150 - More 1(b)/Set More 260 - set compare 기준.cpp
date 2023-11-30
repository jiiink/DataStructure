
#include <iostream>
#include <iomanip>
#include <set>
using namespace std;

int main(){


    char a[] = {'A', 'B', 'C', 'D', 'E'};
    set<char> s1(a, a+4);
    set<char> s2(a, a+5);
    set<char> s3(a, a+5);

    cout << "\nWe begin by creating three sets.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nHere are the values in the first set:\n";
    set<char>::iterator p = s1.begin();
    while (p != s1.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nHere are the values in the second set:\n";
    p = s2.begin();
    while (p != s2.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nThe contents of the third set are the same as the second.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow we perform and show the results of some "
        "set comparisons.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\ns1 < s2  = " << boolalpha << (s1 < s2);
    cout << "\ns1 <= s2 = " << boolalpha << (s1 <= s2);
    cout << "\ns1 > s2  = " << boolalpha << (s1 > s2);
    cout << "\ns1 >= s2 = " << boolalpha << (s1 >= s2);
    cout << "\ns2 == s3 = " << boolalpha << (s2 == s3);
    cout << "\ns2 != s3 = " << boolalpha << (s2 != s3);
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
