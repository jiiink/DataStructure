
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<":- ";for(auto w:X)cout<<w<<", "
using namespace std ;


int main () {
    forward_list<int> mylist = { 100, 110, 120, 130, 140, 150, 160 };


    allout(" mylist[]= ", mylist) ;

    auto fit = mylist.begin( ) ;

    cout << "\n *fit= " << *fit ;
    cout << "\n *(++fit)= " << *(++fit) ;
    cout << "\n *(++fit)= " << *(++fit) ;
    // cout << "\n *(--fit)= " << *(--fit) ;
    // error: no match for operator-- for forward_list
    return 0;
}
