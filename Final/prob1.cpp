#include <bits/stdc++.h>
#define myout(msg, x) cout << "\n"<<msg<<":";for (auto s : x) cout<<" "<<s;
using namespace std;

void a() {
    string sa = "Pizza", sb = "Cola", sc = "World-Cup";
    list<char> la (sa.begin(), sa.end());
    list<char> lb (sb.begin(), sb.end());
    list<char> lc (sc.begin(), sc.end());

    la.splice(la.end(), lb);

    myout("la[]=", la);
    myout("lb[]=", lb);
}

int main() {

    a();

    return 1;
}