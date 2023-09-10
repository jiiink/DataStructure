#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void print_fnc(int n) {
    cout << n << " ";
}

int main() {

    int N[5] = { 1, 2, 3, 4, 5 };
    cout << "\n 일반적인 for 문" << endl;

    for( int i = 0; i < 5; ++i ) {
        cout << i << endl;
    }


    cout << "\n for_each( N, &N[4], print_fnc " << endl;
    for_each( N, &N[4], print_fnc );


    cout << "\n range base for 문" << endl;

    for( auto i : N ) {
        cout << i << endl;
    }

    return 0;
}

