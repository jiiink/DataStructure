#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define allout(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;


template<typename T>
vector<T> myslice(vector<T> const &v, int m, int n) {  // slice로 하면 이름 std와 박치기 함.
    auto first = v.cbegin() + m;
    auto last  = v.cbegin() + n + 1;

    vector<T> vec(first, last);
    return vec;
}

int main() {

    vector<int> v = { 1, 2, 3, 4, 2, 2, 4, 6, 5 };

    int m = 4, n = 7;
    vector<int> sub_vec = myslice(v, m, n);
    allout(" sub_vec[]= ", sub_vec  ) ;

    return 0;
}
