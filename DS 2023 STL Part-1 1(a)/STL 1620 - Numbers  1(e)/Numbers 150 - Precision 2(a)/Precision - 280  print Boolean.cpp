#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;


int main() {
    bool x = true;
    string y ;
    printf("\n 1. x= %d", x); //


    y= x ? "true" : "false" ;
    printf("\n 2. y= %s", y.c_str() );

    fputs("\n 3. x= ", stdout);
    fputs( x ? "true" : "false", stdout);

}
