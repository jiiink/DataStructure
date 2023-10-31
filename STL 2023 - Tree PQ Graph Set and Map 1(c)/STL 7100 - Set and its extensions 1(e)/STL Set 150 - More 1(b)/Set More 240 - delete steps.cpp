//set12.cpp

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {

    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');

    //Create an array of names
    string a[] =     {
        "Alice", "Bob", "Carl", "Dick", "Eve", "Fred", "George", "Harry", "Ian", "Jack"
    };

    cout << "\nWe begin with a set containing the following names:\n";
    set<string> s(a, a+10);
    set<string>::iterator p = s.begin();
        for(auto w : s ) cout << w << ", " ;
    cout << "\n Press Enter to continue ... ";
    cin.ignore(80, '\n');

    cout << "\n Then we delete George.";
    cout << "\n Press Enter to continue ... ";
    cin.ignore(80, '\n');

    set<string>::size_type numberDeleted = s.erase("George");
    cout << "\n numberDeleted= " << numberDeleted << ".";
    cout << "\n 남아있는 원소 \n";
        for(auto w : s ) cout << w << ", " ;
    cout << "\n Press Enter to continue ... ";
    cin.ignore(80, '\n');

    cout << "\n Next we delete William.";
    cout << "\n Press Enter to continue ... ";
    cin.ignore(80, '\n');

    numberDeleted = s.erase("William");
    cout << "\nThe number of deletions was " << numberDeleted << ".";
    cout << "\nAnd here are the remaining contents of the set:\n";

    p = s.begin();

    cout << "Press Enter to continue ... ";
    cin.ignore(80, '\n');

    cout << "\nNow we delete the first name in the set, using an iterator "
         "for access.";
    s.erase(s.begin());
    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');
    cout << "\nThe remaining names in the set are now these:\n";
    p = s.begin();
            for(auto w : s ) cout << w << ", " ;
    cout << "Press Enter to continue ... ";
    cin.ignore(80, '\n');

    cout << "\nFor our final deletion before clearing all the remaining "
         "\npairs, we delete everyone in the \"range\" from Carl to Ian.";
    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');

    s.erase(s.find("Carl"), s.find("Ian"));
    cout << "\nAfter deleting this range of names, the remaining names "
         "in the set are:\n";
        for(auto w : s ) cout << w << ", " ;
    cout << "Press Enter to continue ... ";
    cin.ignore(80, '\n');

    cout << "\nFinally, we clear all remaining values from the set.";
    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');

    s.clear();
    if (s.empty()) cout << "\nThe set is now empty.";
    cout << "\nPress Enter to continue ... ";
    cin.ignore(80, '\n');
}
