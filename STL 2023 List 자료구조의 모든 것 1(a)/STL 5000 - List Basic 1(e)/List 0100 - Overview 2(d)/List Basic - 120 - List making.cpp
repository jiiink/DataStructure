#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n  " << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


int main() {

    char const *som = "Crazy Code" ;
    string my = "Viva Prof. Zoh" ;
    list <char>   clist = {'G', 'o', 'd'};
    list <string> slist = { "십오야", "밝은 달은", "삼돌이가 ", "부르는", "사랑의 노래" } ;

    vector < list<int> > listvec ;

    auto nlist = list<int>();

    nlist.push_back(33) ;
    nlist.push_back(44) ;
    nlist.push_front(55) ;

    outlist("clist", clist) ;
    outlist("slist", slist) ;
    outlist("nlist", nlist) ;

} // end of main()





