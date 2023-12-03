#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

struct Person {
    string name ;
    int    age  ;
    float  wgt  ;
    bool operator<(const Person& a) const {
        return name < a.name ;
    }
} one  ;

bool my_cmp(const Person& a, const Person& b) {
    return a.age > b.age;
}

int main() {

    vector <Person> U ;

    vector <string> vn = { "Tom", "Seri", "Cliff", "Vera", "Thomas"} ;
    vector <int>    va = { 45,     34,      65,     11,      24 } ;
    vector <float>  vw = { 56.45,  45.11,   56.65,  23.12,   73.11} ;

    for(int i = 0 ; i <5 ;++i){
        one.name = vn[i] ;
        one.age  = va[i] ;
        one.wgt  = vw[i] ;
        U.push_back(one) ;
    }


    sort( U.begin(), U.end(), my_cmp );


    for(auto s : U){
        cout << setw(8) << s.name << setw(5) << s.age << setw(6) << s.wgt << endl ;
    }

    if( U[0] < U[2]) cout << "U[0] < U[2] " ;
    else "Nope" ;
    return 0;
}
