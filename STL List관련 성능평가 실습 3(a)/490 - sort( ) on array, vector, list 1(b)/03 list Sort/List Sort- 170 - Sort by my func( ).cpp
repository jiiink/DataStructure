#include <bits/stdc++.h>
using namespace std;
#include <cctype>

// 대소문자를 무시하는 문자열 비교
bool compare_nocase (const string& first, const string& second) {
    unsigned int i=0;
    while ( (i<first.length()) && (i<second.length()) ) {
        if (tolower(first[i])<tolower(second[i]))
            return true;
        else if (tolower(first[i])>tolower(second[i]))
            return false;
        ++i;
    }
    return ( first.length() < second.length() );
} // end

int main () {
    list<string> mylist {"Tomato","apple","banana","Orange", "Mango","grape","Plum","Jamong" };
    list<string>::iterator it;


    cout << "처음 mylist = ";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    mylist.sort();

    cout << "정렬 mylist = ";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    mylist.sort(compare_nocase);

    cout << "After mylist = ";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    return 0;
}


