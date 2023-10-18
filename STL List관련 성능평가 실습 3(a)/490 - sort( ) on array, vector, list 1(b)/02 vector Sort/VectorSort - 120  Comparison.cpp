// vector에서 적용할 수 있는 다양한 동작(operator) 중 sorting을 실험해 봄

#include <bits/stdc++.h>
using namespace std;


int main() {

    int i,j,t ;

    vector <int> v0 = { 11, 21, 29 } ;
    vector <int> va = { 11, 21, 32 } ;
    vector <int> vb = { 11, 21, 32, 65 } ;
    vector <int> vc = { 15, 22, 33, 66 } ;
    vector <int> vd = { 6,  22, 53, 76, 34, 95, -56, 0, 100 } ;


    (v0 > va ) ? cout << "v0 > va \n" : cout << "v0 < va \n" ;
    (va > vb ) ? cout << "va > vb \n" : cout << "va < vb \n" ;
    (va > vc ) ? cout << "va > vc \n" : cout << "va < vc \n" ;
    (va > vd ) ? cout << "va > vd \n" : cout << "va < vd \n" ;


} // end of main ( )
