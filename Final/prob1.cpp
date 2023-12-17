#include <bits/stdc++.h>
#define myout(msg, x) cout << "\n"<<msg<<":";for (auto s : x) cout<<" "<<s;
using namespace std;

int main() {
    string sa = "Pizza", sb = "Cola", sc = "World-Cup";
    list<char> la (sa.begin(), sa.end());
    list<char> lb (sb.begin(), sb.end());
    list<char> lc (sc.begin(), sc.end());

    la.splice(la.end(), lb);

    // a
    myout("la[]=", la);
    myout("lb[]=", lb);


    list<char>::iterator ita, it1, it2;
    it1 = lc.end(); it1--; it1--; it1--; it1--;
    la.splice(lc.begin(), lc, it1, lc.end());
    // b
    myout("lc[]= ", lc);



    string mystr = "PUSANPOP_SUMMER";
    list<char> mylist (mystr.begin(), mystr.end());
    it1 = find(mylist.begin(), mylist.end(), 'S');
    it2 = find(mylist.begin(), mylist.end(), 'M');
    // c
    cout << "\n" << "dist= " << distance(it1, it2);


    string sd = "abcdefg12345";
    list<char> tlist(sa.begin(), sa.end()); // "Pizza"
    list<char> ld(sd.begin(), sd.end());
    it1 = ld.begin();
    it2 = tlist.begin();
    advance(it1, 3);
    tlist.splice(++it2, ld, ld.begin(), it1);
    // d
    myout("\n tlist= ", tlist);

    return 1;
}