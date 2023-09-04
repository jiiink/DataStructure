// 수행시간 측정하는 함수

#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define N 10000000  // 반복횟수 , 천만번

#define TEST(OP) \
mybegin = chrono::system_clock::now();\
for (i = 1; i < N ; ++i) ic = ia OP ib OP i ;\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
printf(" Time: %9.3f \n", tsec );


int main(){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec ;
    int          ia=2,   ib=3,   ic=4;
    long long    la=2,   lb=3,   lc=4;
    float        fa=1.2, fb=2.3, fc=3.4;
    double       da=2.3, db=3.4, dc=4.5;
    long double  wa=2.3, wb=3.4, wc=3.5;
    int i ;

    cout << "\n  Execution Time for Integer Computation \n" ;
    cout << ">  + "; TEST(+);
    cout << ">  - "; TEST(-);
    cout << ">  * "; TEST(*);
    cout << ">  / "; TEST(/);
    cout << ">  % "; TEST(%);
    cout << ">  >>"; TEST(>>);
    cout << ">  <<"; TEST(<<);
    cout << ">  & "; TEST(&);
    cout << ">  | "; TEST(|);
    cout << ">  ^ "; TEST(^);
    cout << ">  =="; TEST(==);

#undef TEST
#define TEST(OP) \
mybegin = chrono::system_clock::now();\
for (i = 1; i < N; ++i)  lc = la OP lb OP i;\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
printf(" Time: %9.3f \n", tsec );

    cout << "\n Execution Time for Long-Long Integer Computation \n" ;
    cout << ">  + "; TEST(+);
    cout << ">  - "; TEST(-);
    cout << ">  * "; TEST(*);
    cout << ">  / "; TEST(/);
    cout << ">  % "; TEST(%);
    cout << ">  >>"; TEST(>>);
    cout << ">  <<"; TEST(<<);
    cout << ">  & "; TEST(&);
    cout << ">  | "; TEST(|);
    cout << ">  ^ "; TEST(^);
    cout << ">  =="; TEST(==);


#undef TEST
#define TEST(OP) \
mybegin = chrono::system_clock::now();\
for (i = 0; i < N; ++i)fc += fa OP fb OP  i ;\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
printf(" Time: %9.3f \n", tsec );

    cout << "\n Execution Time for float Computation \n" ;
    cout << ">  + "; TEST(+);
    cout << ">  * "; TEST(*);
    cout << ">  / "; TEST(/);
    cout << ">  =="; TEST(==);

#undef TEST
#define TEST(OP) \
mybegin = chrono::system_clock::now();\
for (i = 1; i < N; ++i)dc += da OP db OP i ;\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
printf(" Time: %9.3f \n", tsec );


    cout << "\n Execution Time for Double Computation \n" ;
    cout << ">  + "; TEST(+);
    cout << ">  * "; TEST(*);
    cout << ">  / "; TEST(/);
    cout << ">  =="; TEST(==);

#undef TEST
#define TEST(OP) \
mybegin = chrono::system_clock::now();\
for (i = 1; i < N; ++i)wc += wa OP wb OP i;\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
printf(" Time: %9.3f \n", tsec );

    cout << "\n Execution Time for Long-double Computation \n" ;
    cout << ">  + "; TEST(+);
    cout << ">  * "; TEST(*);
    cout << ">  / "; TEST(/);
    cout << ">  =="; TEST(==);

	return 0;
} // end of main( )
