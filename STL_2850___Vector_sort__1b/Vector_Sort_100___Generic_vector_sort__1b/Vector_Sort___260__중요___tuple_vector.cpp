#include <bits/stdc++.h>
using namespace std;

typedef tuple <string, int, float>    Mytype ;
vector < tuple<string, int, float> >  v;
Mytype  myt ;

bool my_cmp(const Mytype& a, const Mytype& b) {
    Mytype r1, r2 ;
    r1 = a ;
    r2 = b ;
    int tint ;
    swap( get<0>(r1), get<0>(r2) ) ;

    return ( r1 < r2 );
}


int main() {

    v.push_back( make_tuple("Cola",  20,  5.2));
    v.push_back( make_tuple("Pop" ,   5,  1.2));
    v.push_back( make_tuple("Hip" ,   3,  1.5));
    v.push_back( make_tuple("Cola" , 15,  2.4));
    v.push_back( make_tuple("Pop" ,  12,  5.2));
    v.push_back( make_tuple("Pop" ,  13,  2.4) );
    v.push_back( make_tuple("Box",    7,  5.2));
    v.push_back( make_tuple("Hip" ,   6,  1.5));
    v.push_back( make_tuple("Box" ,  15,  1.2));


    sort(v.begin(), v.end(), my_cmp ) ;
    cout << " 정렬이후 v의 결과 \n";

    string ws ; int wi ; float wf ;
    for(auto s : v){
       tie( ws, wi, wf) = s ;
        cout << setw(7) << ws <<  setw(5) << wi << setw(5) << wf << endl ;
    }

    return 0;
}
