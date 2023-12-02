// vector 2개를 하나로 합치는 overloading

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


template <typename T>
vector<T>& operator+=(vector<T>& a, const vector<T>& b) {
    a.insert(a.end(), b.begin(), b.end());
    return a;
}

template <typename T>
vector<T>& operator+=(vector<T>& aVector, const T& aObject) {
    aVector.push_back(aObject);
    return aVector;
}

template <typename T>
void vec_out(string msg, const vector<T>& a) {

    cout << "\n" << msg << ": " ;
    for( auto ita = a.begin(); ita < a.end(); ita++)
        cout <<  *ita << ", " ;
}


int main() {

    vector <int> va   { 1, 2, 3,  4,  5} ;
    vector <int> vb   { 7, 8, 9, 10, 11} ;
    vector <string> sa   { "햄", "버", "거"} ;
    vector <string> sb   { "맛", "나", "요"} ;
    va  += vb ;
    sa  += sb ;

    vec_out("va", va ) ;
    vec_out("sa", sa ) ;

    return 0;
}
