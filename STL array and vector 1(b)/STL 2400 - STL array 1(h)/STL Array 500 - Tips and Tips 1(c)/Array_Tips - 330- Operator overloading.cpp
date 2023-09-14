#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n >"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std ;

typedef array<int,5> Five;

template <class T>
T operator+(const T& a1, const T& a2) {
    T a;
    for (typename T::size_type i = 0; i < a1.size(); i++)
        a[i] = a1[i] + a2[i];
    return a;
}


template <class T>
T operator*(const T& a1, const T& a2) {
    T a;
    for (typename T::size_type i = 0; i < a1.size(); i++)
        a[i] = a1[i] * a2[i];
    return a;
}


int main() {

    Five f1, f2, f3 ;

    f1 = {1, 2, 3, 4, 5} ;
    f2 = {2, 3, 4, 5, 6} ;

    allout(" 1. f1[]= ", f1 ) ;
    allout(" 2. f2[]= ", f2 ) ;
    allout(" 3. f3[]= ", f3 ) ;

    f3 = f1 + f2 ;
    allout(" f1 + f2 = f3[]= ", f3 ) ;
    f3 = f1 * f2 ;
    allout(" f1 * f2 = f3[]= ", f3 ) ;

    return 0;
}


