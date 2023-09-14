#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std;

template<typename T>
vector<T> myslice(vector<T> &v, int m, int n)
{
    vector<T> vec(n - m + 1);
    copy(v.begin() + m, v.begin() + n + 1, vec.begin());
    return vec;
}


int main() {
 int i, num ;

 vector <int>  intvec { 34, 35, 36, 37, 38, 41, 42, 43, 44, 45, -99 };
 vector <int>  subvec ( intvec.begin()+1,  intvec.begin()+7 ) ;
 vector <int>  mycall(20) ; // copy할 대상의 반드시 크기가 미리 정해져 있어야 한다.


 copy ( intvec.begin() + 4, intvec.begin() + 8, mycall.begin( ) );

 allout("intvec[]= ", intvec) ;
 allout("subvec[]= ", subvec) ;
 allout("mycall[]= ", mycall) ;


} // end of main()

