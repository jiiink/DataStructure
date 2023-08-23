#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define N 100000000  // 반복횟수 , 1억 번
#define M 10000

vector<int> vi ;
array<int,N> arr;

int Big[M][M];

int myadd(int x, int y){
    return( x + y ) ;
}

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


    for(int i= 0; i < N ; i++) { vi.push_back(i); arr[i]=i ;}


    cout << "\n   2차원 배열의 탐색속도 (row, column)  \n" ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < M; ++i)  for (j = 0; j < M; ++j) Big[i][j]=i+j ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  for i { for j }: "<< tsec << endl;

    mybegin = chrono::system_clock::now();
    for (j = 0; j < M; ++j)  for (i = 0; i < M; ++i) Big[i][j]=i+j ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  for j { for i }: "<< tsec << endl;

    cout << "\n   1차원 vector<int> 탐색속도 jump or sequential  \n" ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < M; ++i)  for (j = 0; j < M; ++j) vi[M*i + j-1]=i+j ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  vi[M*i + j-1]=i+j : "<< tsec << endl;

    mybegin = chrono::system_clock::now();
    for ( j = 0; j < M; ++j )  for (i = 0; i < M; ++i) vi[M*i + j-1]=i+j ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  vi[M*j + i-1]=i+j : "<< tsec << endl;

    mybegin = chrono::system_clock::now();
    for ( i = 0; i < M*M-1; ++i )  vi[i]=i ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  vi[ i ]=i   "<< tsec << endl;

	return 0;
} // end of main( )
