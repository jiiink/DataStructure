#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define N 10000000  // 반복횟수 , 1억 번
#define M 10000

vector<int> vi ;
array<  float,      N> farr;
array<  double,     N> darr;
array< long double, N> ldarr;

int main(){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec ;
    int          ia=2,   ib=3,   ic=4;
    long long    la=2,   lb=3,   lc=4;
    float        fa=1.2, fb=2.3, fc=3.4;
    double       da=2.3, db=3.4, dc=4.5;
    long double  wa=2.3, wb=3.4, wc=3.5;
    int i,j ;


    for(int i= 0; i < N ; i++) { farr[i]=i ; darr[i]=i; ldarr[i]=i ; }

    cout << "\n   Repeats N = " << N ;
    cout << "\n   scan for float, double, long double array[ ] 속도 비교  \n" ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < N; ++i) farr[i] += (float)i ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  float array[N]     Time : "<< tsec << endl;


    mybegin = chrono::system_clock::now();
    for (i = 0; i < N; ++i) darr[i] += (float)i ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  double array[N]     Time : "<< tsec << endl;

    mybegin = chrono::system_clock::now();
    for (i = 0; i < N; ++i) ldarr[i] += (float)i ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  long double array[N] Time : "<< tsec << endl;


	return 0;
} // end of main( )
