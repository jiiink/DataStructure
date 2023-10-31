
#include <bits/stdc++.h>
using namespace std;

typedef unordered_multimap<string, int>::iterator umit;

void printUmm(unordered_multimap<string, int> umm) {
    umit it = umm.begin();

    for (; it != umm.end(); it++)
        cout << "<" << it->first << ", " << it->second << ">  ";

    cout << endl;
}


int main() {

    unordered_multimap<string, int> umm1;

    unordered_multimap<string, int> umm2 ({{"apple", 1},
        {"ball", 2}, {"apple", 10}, {"cat", 7}, {"dog", 9},
        {"cat", 6}, {"cat", 456}, {"cat", 1000}, {"apple", -123 }});

    cout << "Size umm1, umm2 : " << umm1.size() << " : " <<  umm2.size() << endl;
    umm1 = umm2;
    printUmm(umm1);

    string key = "apple";

    umit it = umm1.find(key);
    if (it != umm1.end()) {
        cout << "\n key [" << key << "] 가 umm1에 있음." ;
        cout << "\n 그 value it->second : " << it->second << endl ;
    } else
        cout << "\n key [" << key << "] 가 umm1에 없음." ;

    int cnt = umm1.count(key);
    cout << "\n total values "  << cnt << "\n\n";

    umm2.insert(make_pair("dog", 11));
    umm2.insert({{"alpha", 12}, {"beta", 33}});
    cout << "\n After insertion umm2 : \n";
    printUmm(umm2);


    umm2.erase("apple");
    cout << "\n After deletion of apple umm2 : \n";
    printUmm(umm2);

}
