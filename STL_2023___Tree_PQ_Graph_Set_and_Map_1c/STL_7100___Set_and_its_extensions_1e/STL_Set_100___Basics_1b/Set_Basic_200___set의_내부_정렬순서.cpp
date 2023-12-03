
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

using namespace std;

int main(){

    char a[] = { 'E', 'H', 'C', 'F', 'G', 'D', 'B', 'A', 'Z', '#'};
    set<char> s1(a,   a+3);
    set<char> s2(a+1, a+2);
    set<char> s3(a+3, a+5);
    set<char> s4(a,   a+6);
    set<char> s5(a+1, a+5);
    set<char> s6(a+7, a+9);
    set<char> s7(a+3, a+5);
    set<char> s8(a+8, a+9);


    allout("s1= ", s1) ;
    vector <set<char>> set_vector { s1, s2, s3, s4, s5, s6, s7, s8 };

    cout << "\n Before sort() vset: \n " ;
    for(auto it=set_vector.begin(); it!=set_vector.end(); it++){
            allout("> ", *it) ;
    }

    sort( set_vector.begin(), set_vector.end() ) ;

    cout << "\n After sort() vset: \n " ;
    for(auto it=set_vector.begin(); it!=set_vector.end(); it++){
            allout("> ", *it) ;
    }




} // end of main()
