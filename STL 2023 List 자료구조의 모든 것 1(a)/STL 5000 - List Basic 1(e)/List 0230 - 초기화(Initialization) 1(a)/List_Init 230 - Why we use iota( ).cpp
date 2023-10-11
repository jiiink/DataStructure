#define vout(msg,x)  cout<<"\n"<<msg<<"\n";for(auto w : x) cout<<" "<<w ;
#include <bits/stdc++.h>
using namespace std;


int main() {

    list<int> l(10);  // 10개의 빈 리스트
    iota(l.begin(), l.end(), -4);

    vector<std::list<int>::iterator> v(l.size());
    iota(v.begin(), v.end(), l.begin());

    shuffle(v.begin(), v.end(),mt19937{std::random_device{}()});

    cout << "Contents of the list: ";
    for(auto n: l)cout << n << ' ';
    cout << '\n';

    cout << "Contents of the list, shuffled: ";
    for(auto i: v)cout << *i << ' ';
    cout << '\n';
}

