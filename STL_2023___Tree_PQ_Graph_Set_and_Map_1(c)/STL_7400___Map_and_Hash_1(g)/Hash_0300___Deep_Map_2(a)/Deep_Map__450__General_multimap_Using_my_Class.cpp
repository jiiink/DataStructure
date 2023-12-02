// With < operator defined as member method.
#include <bits/stdc++.h>
using namespace std;

struct Test {
    string name ;
    int id;
    bool operator<(const Test& t) const {
        return (this->name < t.name );
    }
};

int main() {
    Test t1 = { "t", 110 }, t2 = {"aa", 102 }, t3 = { "X",101 }, t4 = {"O", 115 };


    map <Test, int> mp;
    mp[t1] = 111;
    mp[t2] = 23;
    mp[t3] = 7893;
    mp[t4] = 400;

    // Printing Test objects in sorted order
    for (auto x : mp)
        cout << "name= " << x.first.name << " =  " << x.second << endl;
    return 0;
}

